Action()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
/*Correlation comment - Do not change!  Original value='d4224472-7611-414d-9aa0-0e957863e2b6' Name ='_csrf' Type ='Manual'*/
	web_set_max_html_param_len("10985");

	web_reg_save_param_ex(
		"ParamName=_csrf",
		"LB=name=\"_csrf\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/login*",
		LAST);

	web_reg_find("Search=Body",
		"Text=G6ROW",
		LAST);

	web_url("login", 
		"URL=https://stg.g6row.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	//web_add_cookie("DT=DI0IzwNYA-uQKSrSlmA5sFvWQ; DOMAIN=g6hospitality.oktapreview.com");

	//web_add_cookie("proximity_058b2b59c2422d3b8d642cedfd2f86f0=\"EJ25yVKZcXNmbcS6H7NpGuvK8u0etFo11zFGjjZ+1taOXnhCJ2e7ylHv7uBJt89xNXN8RcyUMwEMx2YbUiFNvbq7JkdzHq7xedb44uAhU1yuW6MqJT7+EVAYYsU1uRDzwE/TTZ9oy6/ip7s3VDcWh0IXtqz2Y1VuniW/kurcbVyOODidxeaG7t5y5bB6vFRt\"; DOMAIN=g6hospitality.oktapreview.com");

/*Correlation comment - Do not change!  Original value='D94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz48c2FtbDJwOlJlc3BvbnNlIHhtbG5zOnNhbWwycD0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOnByb3RvY29sIiBEZXN0aW5hdGlvbj0iaHR0cHM6Ly9nNnByaWNpbmctc3RnLmc2aG9zcGl0YWxpdHkuY29tL3NhbWwvYXNzZXJ0aW9uP3JlZGlyZWN0PXRydWUiIElEPSJpZDk1NzMwOTA2MjI1NTI1OTMxNzU1MjI1NDc1IiBJc3N1ZUluc3RhbnQ9IjIwMTctMDgtMjhUMTU6NTU6MTcuNDA3WiIgVmVyc2lvbj0iMi4wIiB4bWxuczp4cz0iaHR0cDovL3d3dy53My5vcmcvMjAwMS9YTUxTY2hlbWEiPjxzYW1sMjpJc3N1ZXIgeG1sbnM6c2FtbDI9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphc3NlcnRpb24iIEZvcm1hdD0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOm5hbWVpZC1mb3JtYXQ6ZW50aXR5Ij5odHRwOi8vd3d3Lm9rdGEuY29tL2V4azRjbDE0dHF2TURXV3MzMGg3PC9zYW1sMjpJc3N1ZXI&#x2b;PGRzOlNpZ25hdHVyZSB4bWxuczpkcz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC8wOS94bWxkc2lnIyI&#x2b;PGRzOlNpZ25lZEluZm8&#x2b;PGRzOkNhbm9uaWNhbGl6YXRpb25NZXRob2QgQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzEwL3htbC1leGMtYzE0biMiLz48ZHM6U2lnbmF0dXJlTWV0aG9kIEFsZ29yaXRobT0iaHR0cDovL3d3dy53My5vcmcvMjAwMS8wNC94bWxkc2lnLW1vcmUjcnNhLXNoYTI1NiIvPjxkczpSZWZlcmVuY2UgVVJJPSIjaWQ5NTczMDkwNjIyNTUyNTkzMTc1NTIyNTQ3NSI&#x2b;PGRzOlRyYW5zZm9ybXM&#x2b;PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvMDkveG1sZHNpZyNlbnZlbG9wZWQtc2lnbmF0dXJlIi8&#x2b;PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyI&#x2b;PGVjOkluY2x1c2l2ZU5hbWVzcGFjZXMgeG1sbnM6ZWM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyIgUHJlZml4TGlzdD0ieHMiLz48L2RzOlRyYW5zZm9ybT48L2RzOlRyYW5zZm9ybXM&#x2b;PGRzOkRpZ2VzdE1ldGhvZCBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMDQveG1sZW5jI3NoYTI1NiIvPjxkczpEaWdlc3RWYWx1ZT5WcGFFcXRacWNuY0I1WGFQc2tHajdjVWxFZE1ZVG1PemRCZXdzbUt2MFBjPTwvZHM6RGlnZXN0VmFsdWU&#x2b;PC9kczpSZWZlcmVuY2U&#x2b;PC9kczpTaWduZWRJbmZvPjxkczpTaWduYXR1cmVWYWx1ZT5UMmVKR1R4a0NaTGFibzVHN0NnRlZBajR5Q3FDZlNiR25FUUhST1NGSkpaY2o5WjlFcEVOY1ZvN0gzR2NTRkZ6NTExSk1ScklhNm9oL0E4elEwYWV4QmlJMm1TM3hpZ2I4dzk5bkZzVWFyZWRNN2JLcWV1dmoyRk9uVmt0YUQwTDgxdVR2SWVvYlB5aTYvbEtBN25sa054aVlnc1VyVUQ4a3pEQzBhYzlXdTgzWGltRUd6empUZXR0emNoUjR6ZG5zRjB0SDhCU0FzcXltb1ZSOTl5TnovMVBLS1NlYS9nZW44T2JVNUlQcHhId21Nc0NqUFkvN0UrNlduemJ4TDk0UnkydGxRQlFRTHN4SlFXOHhDUXMxVW9kaU15Z2QvQnRpREtGNEVnS3JJNFNCVGZVZGdOMm13a0ZZMTIrdzJmYW1YblFPMkNSUmYrQUwzeEtUbHk1NFE9PTwvZHM6U2lnbmF0dXJlVmFsdWU&#x2b;PGRzOktleUluZm8&#x2b;PGRzOlg1MDlEYXRhPjxkczpYNTA5Q2VydGlmaWNhdGU&#x2b;TUlJRHFqQ0NBcEtnQXdJQkFnSUdBVXo3ZUhlTk1BMEdDU3FHU0liM0RRRUJCUVVBTUlHVk1Rc3dDUVlEVlFRR0V3SlZVekVUTUJFRwpBMVVFQ0F3S1EyRnNhV1p2Y201cFlURVdNQlFHQTFVRUJ3d05VMkZ1SUVaeVlXNWphWE5qYnpFTk1Bc0dBMVVFQ2d3RVQydDBZVEVVCk1CSUdBMVVFQ3d3TFUxTlBVSEp2ZG1sa1pYSXhGakFVQmdOVkJBTU1EV2MyYUc5emNHbDBZV3hwZEhreEhEQWFCZ2txaGtpRzl3MEIKQ1FFV0RXbHVabTlBYjJ0MFlTNWpiMjB3SGhjTk1UVXdOREkzTVRVeU1EVTRXaGNOTkRVd05ESTNNVFV5TVRVNFdqQ0JsVEVMTUFrRwpBMVVFQmhNQ1ZWTXhFekFSQmdOVkJBZ01Da05oYkdsbWIzSnVhV0V4RmpBVUJnTlZCQWNNRFZOaGJpQkdjbUZ1WTJselkyOHhEVEFMCkJnTlZCQW9NQkU5cmRHRXhGREFTQmdOVkJBc01DMU5UVDFCeWIzWnBaR1Z5TVJZd0ZBWURWUVFEREExbk5taHZjM0JwZEdGc2FYUjUKTVJ3d0dnWUpLb1pJaHZjTkFRa0JGZzFwYm1adlFHOXJkR0V1WTI5dE1JSUJJakFOQmdrcWhraUc5dzBCQVFFRkFBT0NBUThBTUlJQgpDZ0tDQVFFQW8yZW8xZ2ZDYXBzVS9YVjhXTGRJTGdyUjFoQlhTUHZwQVgzVGkrQjBxdmg4N2ZNaSt5MHZRYVAzK2Q2YnBxU3VqdjltClZFRFRqVHRoVkwrcHliQlMwcjhGMWI4VzRhNXc5MWVqeUxPSkJwaG5Gdk9pOFZwWU4vdGE3YzRBa29wSG1peUF4cUptVE5QY0dFSWcKV05wc09xU3FublFxaGJnRVVGN2xsSGFUTHJNZ3RSeDdoTTl5OXlUc0ozL2NldkNXYmxYOGU3dHFhcm1uZC9XUzZFVllDc0FCaDFiVQpDNTlJMFo4MkNWWlpoRkRxU1ZFbkIrZXNEVmI0VktreENIWk1WdWlWb3g2ZlpIRVEya3JsbVB0R2VkSVk4cDRQZFZzL2EyUVBUUEVRCmNPV2ZPb1g4aFJ0UjBvdkFSbzdKWU5CNlBXY2ZuVmtCRnVnMDVuUWNxRDBCdlFJREFRQUJNQTBHQ1NxR1NJYjNEUUVCQlFVQUE0SUIKQVFCbytQZFNtOU1WZ2xUdXJxaWxoTVN4MUZoUVhLMGtDL1RnVUdqaEN2NUR1SjQ3WllLL1FwTnRoQ1RxOUgvQlhxY3I4Q2FPYmM4KwpZZzZWeDZEVjZmQXdaSk9Bc3BwYks4enQ1cjNHb1RQaXUybUtTeHNUMnZGMy9yYk12cnRxc1ZJL2kzZkZEbzd6NVdmRVdZV01acU4yCklSUWxQRWV2bDVabkRUSHh2V1FTckIzdWFidVpIQjJERzFnbnZpcXIzWHR4NE1XSkZ6dlRJYmhtL2VXMmFtV2tlamhXU0JWUVArZ0IKM0hmdmFITFRMU3htVktlb0oxWXdHRjBmU1J2a1dBdVFiV2FBb0xCOElQUGZZeCs2OWZjdmV6NVc2ZnNwaGwxRzhqeWJsMmV6bmxpYgpCanBFWFZPYzc5ajVrNWR1Mm5oWUlnd1I2R3MvSFgrVTBpVWluTEcwPC9kczpYNTA5Q2VydGlmaWNhdGU&#x2b;PC9kczpYNTA5RGF0YT48L2RzOktleUluZm8&#x2b;PC9kczpTaWduYXR1cmU&#x2b;PHNhbWwycDpTdGF0dXMgeG1sbnM6c2FtbDJwPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6cHJvdG9jb2wiPjxzYW1sMnA6U3RhdHVzQ29kZSBWYWx1ZT0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOnN0YXR1czpTdWNjZXNzIi8&#x2b;PC9zYW1sMnA6U3RhdHVzPjxzYW1sMjpBc3NlcnRpb24geG1sbnM6c2FtbDI9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphc3NlcnRpb24iIElEPSJpZDk1NzMwOTA2MjI1NzM0NDExMTE1NzkyODEwIiBJc3N1ZUluc3RhbnQ9IjIwMTctMDgtMjhUMTU6NTU6MTcuNDA3WiIgVmVyc2lvbj0iMi4wIiB4bWxuczp4cz0iaHR0cDovL3d3dy53My5vcmcvMjAwMS9YTUxTY2hlbWEiPjxzYW1sMjpJc3N1ZXIgRm9ybWF0PSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6bmFtZWlkLWZvcm1hdDplbnRpdHkiIHhtbG5zOnNhbWwyPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YXNzZXJ0aW9uIj5odHRwOi8vd3d3Lm9rdGEuY29tL2V4azRjbDE0dHF2TURXV3MzMGg3PC9zYW1sMjpJc3N1ZXI&#x2b;PGRzOlNpZ25hdHVyZSB4bWxuczpkcz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC8wOS94bWxkc2lnIyI&#x2b;PGRzOlNpZ25lZEluZm8&#x2b;PGRzOkNhbm9uaWNhbGl6YXRpb25NZXRob2QgQWxnb3JpdGhtPSJodHRwOi8vd3d3LnczLm9yZy8yMDAxLzEwL3htbC1leGMtYzE0biMiLz48ZHM6U2lnbmF0dXJlTWV0aG9kIEFsZ29yaXRobT0iaHR0cDovL3d3dy53My5vcmcvMjAwMS8wNC94bWxkc2lnLW1vcmUjcnNhLXNoYTI1NiIvPjxkczpSZWZlcmVuY2UgVVJJPSIjaWQ5NTczMDkwNjIyNTczNDQxMTExNTc5MjgxMCI&#x2b;PGRzOlRyYW5zZm9ybXM&#x2b;PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvMDkveG1sZHNpZyNlbnZlbG9wZWQtc2lnbmF0dXJlIi8&#x2b;PGRzOlRyYW5zZm9ybSBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyI&#x2b;PGVjOkluY2x1c2l2ZU5hbWVzcGFjZXMgeG1sbnM6ZWM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMTAveG1sLWV4Yy1jMTRuIyIgUHJlZml4TGlzdD0ieHMiLz48L2RzOlRyYW5zZm9ybT48L2RzOlRyYW5zZm9ybXM&#x2b;PGRzOkRpZ2VzdE1ldGhvZCBBbGdvcml0aG09Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvMDQveG1sZW5jI3NoYTI1NiIvPjxkczpEaWdlc3RWYWx1ZT4wTEpnTnJVdjQ4RWtxRnYyYUk4UGtvbEZmeW1xeGZjVzliQnBhTjRKTnVFPTwvZHM6RGlnZXN0VmFsdWU&#x2b;PC9kczpSZWZlcmVuY2U&#x2b;PC9kczpTaWduZWRJbmZvPjxkczpTaWduYXR1cmVWYWx1ZT5qZkNMZWNsK2pmNXVaeDJuVjZpblh5RTIwTGlKRlBlTG9kejk0Q1MrcEJ2NElSb3JDTm9HVUZJdWM5ZVhXdFJ4RURBc1g1Mlh2WXdEZnIrRlZock9EQUtYOGtramNsK0ptcWY3ZFphdGhDaE9zM1dLc05OWmE3K3FYaVEydHN3MERRV3k2RXJDMnBVUFlVVXo5R2NBY1pIeWlBUDZWc1NFWVI1NFJ2eis0MlFyRHY3RU0xRjA5S3I2MHJsZUpybjUrOFQxN3hqTTA2YXpNWTdyUzhRR3orNEpvaFZlTmo0STZuM2lSdnhyaExFVCtFckF1VlptRUtLZytuTmFGUWpnbTZHRHQ3b3NhaDFhZUt2VnhWN08rME1IQU11Y21GTVQ1YWFlamNzTi9PaVo4NEc0TjRrQVA3SFdDUkZHdjNRSm5rQkdiQzFSUjhwYlpBYVdiQXlPMVE9PTwvZHM6U2lnbmF0dXJlVmFsdWU&#x2b;PGRzOktleUluZm8&#x2b;PGRzOlg1MDlEYXRhPjxkczpYNTA5Q2VydGlmaWNhdGU&#x2b;TUlJRHFqQ0NBcEtnQXdJQkFnSUdBVXo3ZUhlTk1BMEdDU3FHU0liM0RRRUJCUVVBTUlHVk1Rc3dDUVlEVlFRR0V3SlZVekVUTUJFRwpBMVVFQ0F3S1EyRnNhV1p2Y201cFlURVdNQlFHQTFVRUJ3d05VMkZ1SUVaeVlXNWphWE5qYnpFTk1Bc0dBMVVFQ2d3RVQydDBZVEVVCk1CSUdBMVVFQ3d3TFUxTlBVSEp2ZG1sa1pYSXhGakFVQmdOVkJBTU1EV2MyYUc5emNHbDBZV3hwZEhreEhEQWFCZ2txaGtpRzl3MEIKQ1FFV0RXbHVabTlBYjJ0MFlTNWpiMjB3SGhjTk1UVXdOREkzTVRVeU1EVTRXaGNOTkRVd05ESTNNVFV5TVRVNFdqQ0JsVEVMTUFrRwpBMVVFQmhNQ1ZWTXhFekFSQmdOVkJBZ01Da05oYkdsbWIzSnVhV0V4RmpBVUJnTlZCQWNNRFZOaGJpQkdjbUZ1WTJselkyOHhEVEFMCkJnTlZCQW9NQkU5cmRHRXhGREFTQmdOVkJBc01DMU5UVDFCeWIzWnBaR1Z5TVJZd0ZBWURWUVFEREExbk5taHZjM0JwZEdGc2FYUjUKTVJ3d0dnWUpLb1pJaHZjTkFRa0JGZzFwYm1adlFHOXJkR0V1WTI5dE1JSUJJakFOQmdrcWhraUc5dzBCQVFFRkFBT0NBUThBTUlJQgpDZ0tDQVFFQW8yZW8xZ2ZDYXBzVS9YVjhXTGRJTGdyUjFoQlhTUHZwQVgzVGkrQjBxdmg4N2ZNaSt5MHZRYVAzK2Q2YnBxU3VqdjltClZFRFRqVHRoVkwrcHliQlMwcjhGMWI4VzRhNXc5MWVqeUxPSkJwaG5Gdk9pOFZwWU4vdGE3YzRBa29wSG1peUF4cUptVE5QY0dFSWcKV05wc09xU3FublFxaGJnRVVGN2xsSGFUTHJNZ3RSeDdoTTl5OXlUc0ozL2NldkNXYmxYOGU3dHFhcm1uZC9XUzZFVllDc0FCaDFiVQpDNTlJMFo4MkNWWlpoRkRxU1ZFbkIrZXNEVmI0VktreENIWk1WdWlWb3g2ZlpIRVEya3JsbVB0R2VkSVk4cDRQZFZzL2EyUVBUUEVRCmNPV2ZPb1g4aFJ0UjBvdkFSbzdKWU5CNlBXY2ZuVmtCRnVnMDVuUWNxRDBCdlFJREFRQUJNQTBHQ1NxR1NJYjNEUUVCQlFVQUE0SUIKQVFCbytQZFNtOU1WZ2xUdXJxaWxoTVN4MUZoUVhLMGtDL1RnVUdqaEN2NUR1SjQ3WllLL1FwTnRoQ1RxOUgvQlhxY3I4Q2FPYmM4KwpZZzZWeDZEVjZmQXdaSk9Bc3BwYks4enQ1cjNHb1RQaXUybUtTeHNUMnZGMy9yYk12cnRxc1ZJL2kzZkZEbzd6NVdmRVdZV01acU4yCklSUWxQRWV2bDVabkRUSHh2V1FTckIzdWFidVpIQjJERzFnbnZpcXIzWHR4NE1XSkZ6dlRJYmhtL2VXMmFtV2tlamhXU0JWUVArZ0IKM0hmdmFITFRMU3htVktlb0oxWXdHRjBmU1J2a1dBdVFiV2FBb0xCOElQUGZZeCs2OWZjdmV6NVc2ZnNwaGwxRzhqeWJsMmV6bmxpYgpCanBFWFZPYzc5ajVrNWR1Mm5oWUlnd1I2R3MvSFgrVTBpVWluTEcwPC9kczpYNTA5Q2VydGlmaWNhdGU&#x2b;PC9kczpYNTA5RGF0YT48L2RzOktleUluZm8&#x2b;PC9kczpTaWduYXR1cmU&#x2b;PHNhbWwyOlN1YmplY3QgeG1sbnM6c2FtbDI9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphc3NlcnRpb24iPjxzYW1sMjpOYW1lSUQgRm9ybWF0PSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoxLjE6bmFtZWlkLWZvcm1hdDp1bnNwZWNpZmllZCI&#x2b;bG9hZHJ1bm5lci0wMDBAZzZob3NwaXRhbGl0eS5jb208L3NhbWwyOk5hbWVJRD48c2FtbDI6U3ViamVjdENvbmZpcm1hdGlvbiBNZXRob2Q9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDpjbTpiZWFyZXIiPjxzYW1sMjpTdWJqZWN0Q29uZmlybWF0aW9uRGF0YSBOb3RPbk9yQWZ0ZXI9IjIwMTctMDgtMjhUMTY6MDA6MTcuNDA3WiIgUmVjaXBpZW50PSJodHRwczovL2c2cHJpY2luZy1zdGcuZzZob3NwaXRhbGl0eS5jb20vc2FtbC9hc3NlcnRpb24&#x2f;cmVkaXJlY3Q9dHJ1ZSIvPjwvc2FtbDI6U3ViamVjdENvbmZpcm1hdGlvbj48L3NhbWwyOlN1YmplY3Q&#x2b;PHNhbWwyOkNvbmRpdGlvbnMgTm90QmVmb3JlPSIyMDE3LTA4LTI4VDE1OjUwOjE3LjQwN1oiIE5vdE9uT3JBZnRlcj0iMjAxNy0wOC0yOFQxNjowMDoxNy40MDdaIiB4bWxuczpzYW1sMj0idXJuOm9hc2lzOm5hbWVzOnRjOlNBTUw6Mi4wOmFzc2VydGlvbiI&#x2b;PHNhbWwyOkF1ZGllbmNlUmVzdHJpY3Rpb24&#x2b;PHNhbWwyOkF1ZGllbmNlPmh0dHBzOi8vZzZwcmljaW5nLXN0Zy5nNmhvc3BpdGFsaXR5LmNvbS5jb20vc2FtbC9hc3NlcnRpb24&#x2f;cmVkaXJlY3Q9dHJ1ZTwvc2FtbDI6QXVkaWVuY2U&#x2b;PC9zYW1sMjpBdWRpZW5jZVJlc3RyaWN0aW9uPjwvc2FtbDI6Q29uZGl0aW9ucz48c2FtbDI6QXV0aG5TdGF0ZW1lbnQgQXV0aG5JbnN0YW50PSIyMDE3LTA4LTI4VDE1OjU1OjE3LjQwN1oiIFNlc3Npb25JbmRleD0iaWQxNTAzOTM1NzE3NDA3LjE3NDg0OTgzMDgiIHhtbG5zOnNhbWwyPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YXNzZXJ0aW9uIj48c2FtbDI6QXV0aG5Db250ZXh0PjxzYW1sMjpBdXRobkNvbnRleHRDbGFzc1JlZj51cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YWM6Y2xhc3NlczpQYXNzd29yZFByb3RlY3RlZFRyYW5zcG9ydDwvc2FtbDI6QXV0aG5Db250ZXh0Q2xhc3NSZWY&#x2b;PC9zYW1sMjpBdXRobkNvbnRleHQ&#x2b;PC9zYW1sMjpBdXRoblN0YXRlbWVudD48c2FtbDI6QXR0cmlidXRlU3RhdGVtZW50IHhtbG5zOnNhbWwyPSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YXNzZXJ0aW9uIj48c2FtbDI6QXR0cmlidXRlIE5hbWU9Ikc2Q2FsbGJhY2tVcmwiIE5hbWVGb3JtYXQ9InVybjpvYXNpczpuYW1lczp0YzpTQU1MOjIuMDphdHRybmFtZS1mb3JtYXQ6dXJpIj48c2FtbDI6QXR0cmlidXRlVmFsdWUgeG1sbnM6eHM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvWE1MU2NoZW1hIiB4bWxuczp4c2k9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvWE1MU2NoZW1hLWluc3RhbmNlIiB4c2k6dHlwZT0ieHM6c3RyaW5nIj5odHRwczovL2c2cHJpY2luZy1zdGcuZzZob3NwaXRhbGl0eS5jb20vIy9zZXNzaW9uL25ldzwvc2FtbDI6QXR0cmlidXRlVmFsdWU&#x2b;PC9zYW1sMjpBdHRyaWJ1dGU&#x2b;PHNhbWwyOkF0dHJpYnV0ZSBOYW1lPSJHNkNlcnROYW1lIiBOYW1lRm9ybWF0PSJ1cm46b2FzaXM6bmFtZXM6dGM6U0FNTDoyLjA6YXR0cm5hbWUtZm9ybWF0OnVuc3BlY2lmaWVkIj48c2FtbDI6QXR0cmlidXRlVmFsdWUgeG1sbnM6eHM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvWE1MU2NoZW1hIiB4bWxuczp4c2k9Imh0dHA6Ly93d3cudzMub3JnLzIwMDEvWE1MU2NoZW1hLWluc3RhbmNlIiB4c2k6dHlwZT0ieHM6c3RyaW5nIj5va3RhX3N0YWdlLmNlcnQ8L3NhbWwyOkF0dHJpYnV0ZVZhbHVlPjwvc2FtbDI6QXR0cmlidXRlPjwvc2FtbDI6QXR0cmlidXRlU3RhdGVtZW50Pjwvc2FtbDI6QXNzZXJ0aW9uPjwvc2FtbDJwOlJlc3BvbnNlPg&#x3d;&#x3d;' Name ='CorrelationParameter' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter",
		"LB=value=",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/saml*",
		LAST);
		
		
web_add_header("Cache-Control","no-cache");
web_add_header("Connection","Keep-Alive");
web_add_header("UA-CPU","AMD64");
web_add_header("Origin","https://stg.g6row.com");
web_add_header("Access-Control-Allow-Origin","https://stg.g6row.com");
web_add_header("Pragma","No-cache");
web_add_header("Access-Control-Allow-Credentials","true");
web_add_header("Content-Length","402");
web_add_header("Transfer-Encoding","chunked");


	web_submit_data("login_2",
		"Action=https://stg.g6row.com/login",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://stg.g6row.com/login",
		"Snapshot=t10.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=loadrunner-000@g6hospitality.com", ENDITEM,
		"Name=password", "Value=N1makeIts3W!", ENDITEM,
		"Name=_csrf", "Value={_csrf}", ENDITEM,
		LAST);


	web_convert_param("CorrelationParameter_PLAIN",
		"SourceString={CorrelationParameter}",
		"SourceEncoding=HTML",
		"TargetEncoding=PLAIN",
		LAST);

	web_submit_data("assertion",
		"Action=https://g6pricing-stg.g6hospitality.com/saml/assertion?redirect=true",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://g6hospitality.oktapreview.com/app/g6hospitality_g6crstest_1/exk4cl14tqvMDWWs30h7/sso/saml",
		"Snapshot=t11.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=SAMLResponse", "Value=P{CorrelationParameter_PLAIN}", ENDITEM,
		"Name=RelayState", "Value=", ENDITEM,
		LAST);

	web_custom_request("dynaTraceMonitor", 
		"URL=https://g6pricing-stg.g6hospitality.com/rest//dynatrace/dynaTraceMonitor?type=js&flavor=post&referer=https%3A%2F%2Fg6pricing-stg.g6hospitality.com%2F%23%2Fsession%2Fnew&app=MyApp&format=lzw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://g6pricing-stg.g6hospitality.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=$\\x00a\\x00=\\x001\\x00%\\x007\\x00C\\x00\\x03\\x01\\x05\\x01_\\x00l\\x00o\\x00a\\x00d\\x00_\\x00\\x04\\x01C\\x00\t\\x01\\x0B\\x01\r"
		"\\x01\\x0F\\x01-\\x00\\x0F\\x011\\x005\\x000\\x003\\x009\\x003\\x005\\x007\\x001\\x008\\x003\\x001\\x004\\x00\\x16\\x01\\x18\\x01\\x1A\\x01\\x1C\\x017\\x002\\x007\\x003\\x008\\x007\\x00\\x0F\\x012\\x00\\x07\\x01C\\x00\\x15\\x01\\x05\\x012\\x011\\x01\\x14\\x016\\x01\\x05\\x01h\\x00t\\x00t\\x00p\\x00s\\x00%\\x003\\x00A\\x00%\\x002\\x00F\\x00A\\x01F\\x00g\\x006\\x00h\\x00o\\x00s\\x00p\\x00i\\x00t\\x00a\\x00l\\x00L\\x01y\\x00.\\x00o\\x00k\\x00M\\x01p\\x00r\\x00e\\x00v\\x00i\\x00e\\x00w\\x00.\\x00c\\x0"
		"0o\\x00m\\x00D\\x01a\\x00p\\x00p\\x00D\\x01F\\x01H\\x01J\\x01L\\x01N\\x01P\\x01_\\x00F\\x01c\\x00r\\x00s\\x00t\\x00e\\x00p\\x01_\\x00\\x03\\x01B\\x01e\\x00x\\x00k\\x004\\x00c\\x00l\\x00\"\\x01t\\x00q\\x00v\\x00M\\x00D\\x00W\\x00W\\x00s\\x003\\x000\\x00h\\x00-\\x01B\\x01s\\x00s\\x00o\\x00D\\x01s\\x00a\\x00m\\x00l\\x00A\\x01C\\x002\\x00.\\x01\\x0F\\x01j\\x002\\x00.\\x00\\x99\\x01#\\x01\\x05\\x01x\\x00h\\x00r\\x00\\x97\\x01\\x99\\x01\\x9B\\x01$\\x01\\x19\\x01\\x1B\\x01\\x1D\\x012\\x004\\x000\\x00/"
		"\\x01\\xA4\\x01&\\x01\\xA7\\x01*\\x01,\\x01.\\x010\\x014\\x014\\x01D\\x01W\\x01p\\x01a\\x01c\\x01O\\x01c\\x00a\\x00t\\x00i\\x00o\\x00n\\x00=\\x013\\x017\\x015\\x01\\x05\\x01\\xA9\\x01\\x95\\x01\\x05\\x015\\x003\\x00#\\x012\\x00C\\x003\\x00\\x0F\\x01\\x9C\\x01C\\x00\\x98\\x01\\x9A\\x01.\\x00\\xD0\\x01\\x9E\\x01\\xA0\\x01\\x05\\x01\\xD2\\x01\\xA3\\x01\\x05\\x01\\x17\\x01\\xA5\\x01'\\x01\\xA8\\x014\\x005\\x00\\xD0\\x01\\xDC\\x01\\xAD\\x01"
		"(\\x01\\xAF\\x01-\\x01\\x05\\x01\\xAB\\x01\\xC2\\x01\\xEA\\x01C\\x00\\x8E\\x01\\x90\\x01\\x92\\x01B\\x01\n\\x01g\\x00i\\x00n\\x00C\\x00\\xBF\\x01f\\x00i\\x00g\\x00\\xC3\\x01\\xB3\\x01\\x16\\x01\\x0F\\x017\\x009\\x00\\x93\\x01\\xD0\\x015\\x00\\xA1\\x01\\xD3\\x01\\xD5\\x01\\x9F\\x01\\x03\\x02\\xDA\\x01\\x06\\x01%\\x01\\xA6\\x01(\\x01\\xE0\\x014\\x008\\x00\\xAC\\x01\\x0B\\x02)\\x01+\\x01\\xE7\\x01\\x94\\x01\\xB2\\x01\\xC3\\x01\\xB5\\x01r\\x01t\\x00D\\x01\\xF1\\x01\\xF3\\x01\\xFA\\x01\\xC3\\x01/"
		"\\x01\\xFF\\x01\\xE8\\x01\\xAB\\x01\\xCC\\x01\\x02\\x02\\x05\\x016\\x00\\x07\\x02\\xD4\\x01\\x0F\\x01\\xD6\\x01(\\x02\\xE2\\x01\n\\x02\\xDE\\x014\\x007\\x008\\x00'\\x02\\xDB\\x01.\\x02\\xAE\\x01\\x13\\x02\\xB1\\x01\\x1E\\x02\\x05\\x01\\x18\\x02\\xB7\\x01B\\x01b\\x01p\\x00\\xBA\\x01\\xBC\\x01\\xBE\\x01\\xC0\\x019\\x02\\xC4\\x01C\\x00 \\x01\\x16\\x01\\x19\\x01\\x93\\x013\\x02C\\x00\\x14\\x02\\xD9\\x01)\\x02\\x9D\\x01\\x06\\x02\\xD8\\x01\\xA2\\x01O\\x02\t"
		"\\x02\\xDD\\x01\\xA7\\x01\\x0E\\x027\\x00%\\x02U\\x02\\xE4\\x01\\x12\\x02\\xB0\\x01\\xE8\\x018\\x00\\xC7\\x01E\\x02\\xB4\\x01B\\x01\\xB6\\x01\\x1A\\x02B\\x01V\\x01o\\x00p\\x00e\\x00r\\x00\\xBD\\x01r\\x01D\\x024\\x011\\x00\\x1C\\x01a\\x022\\x00t\\x02'\\x02\\xCC\\x01K\\x02\\x0F\\x02R\\x02\\x04\\x02*\\x02Q\\x02\\xD1\\x01S\\x02-\\x02V\\x02\\x0C\\x028\\x00G\\x024\\x02\\x81\\x022\\x005\\x001\\x000\\x00!\\x02\\x15\\x02D\\x02;"
		"\\x02f\\x02F\\x00r\\x00o\\x00l\\x00n\\x02\\xEB\\x01\\xFB\\x01\\xE8\\x01\\x89\\x02.\\x01t\\x02\\x93\\x01a\\x02\\xCE\\x01\\x08\\x01\\xBF\\x01\n\\x01\\x0C\\x01\\x0E\\x01\\x08\\x01\\xA0\\x02\\x13\\x01\\xEB\\x01\\xE3\\x01\\x11\\x024\\x001\\x00\\x1E\\x01\\x10\\x02/\\x02\\xAA\\x02Z\\x02/\\x01$\\x00r\\x00I\\x00d\\x00=\\x00R\\x00I\\x00D\\x00_\\x00\\xA8\\x01\\x1F\\x01\\xB1\\x02p\\x00\\xB3\\x02\\x02\\x01+"
		"\\x01t\\x02\\x18\\x01\\x88\\x020\\x00$\\x00d\\x00_\\x01R\\x00\\x02\\x015\\x02\\x0C\\x021\\x006\\x001\\x00$\\x00w\\x00\\x02\\x019\\x002\\x00\\xC4\\x02h\\x00=\\x00\\x1B\\x014\\x00$\\x00s\\x00\\xD5\\x02\\x89\\x028\\x00\\xC4\\x02s\\x00\\xD0\\x021\\x00\\xD2\\x02\\xC4\\x02n\\x00t\\x00=\\x00a\\x000\\x00b\\x00\\xA7\\x02'\\x01\\x1F\\x01!\\x01z\\x014\\x00d\\x008\\x00\\xA9\\x01e\\x00\\xF1\\x020\\x00f\\x00\\xF4\\x02g\\x00\\xF4\\x02h\\x00\\xF4\\x02i\\x00\\xF4\\x02k\\x00,"
		"\\x018\\x00l\\x009\\x000\\x000\\x00m\\x00\\x02\\x032\\x00n\\x00\\x02\\x030\\x00o\\x005\\x00\\x1D\\x019\\x00p\\x00\\x0C\\x03\\xFE\\x01q\\x005\\x00 \\x019\\x00r\\x00\\x13\\x030\\x02s\\x00\\x13\\x03\\x1D\\x01t\\x00\\x13\\x03\\xCD\\x02$\\x003\\x00p\\x00=\\x00F\\x01V\\x01i\\x00c\\x00\\xF3\\x01g\\x00-\\x00p\\x01g\\x00.\\x00f\\x01I\\x01K\\x01M\\x01O\\x01t\\x00Q\\x01^\\x01`\\x01\\x05\\x01\\xC1\\x01\\x94\\x01\\x0F\\x010\\x009\\x03;\\x03\\x05\\x01:\\x03\\xE8\\x01\\x0F\\x01<\\x03C\\x00"
		">\\x03B\\x03\\x0F\\x01\\x02\\x033\\x00t\\x01/\\x01\\x14\\x022\\x009\\x00y\\x02\\x94\\x01\\x84\\x02\\xCD\\x01q\\x02\\x96\\x01=\\x03A\\x03C\\x03\\x06\\x03t\\x01\"\\x01\\xAF\\x02\\xA8\\x01.\\x010\\x00K\\x02\\xA8\\x01a\\x02K\\x02C\\x03a\\x03\\x0F\\x01\\x13\\x03\\x87\\x02_\\x00\\xCD\\x020\\x005\\x00f\\x03\"\\x016\\x00f\\x03/"
		"\\x018\\x00m\\x03\\xA9\\x01f\\x03\\xE0\\x012\\x00r\\x038\\x001\\x00f\\x03\\x0C\\x03i\\x036\\x005\\x006\\x00l\\x03\\xFE\\x01Q\\x03\\x05\\x013\\x006\\x00\\x9D\\x02L\\x02a\\x02q\\x020\\x02>\\x01B\\x00w\\x00\\x8B\\x03,\\x03o\\x00o\\x00g\\x00\\x93\\x02-\\x00a\\x00n\\x00N\\x01y\\x00\\xBD\\x01c\\x00s\\x00]"
		"\\x01_\\x01\\x0F\\x01k\\x00\\xFC\\x01S\\x03\\x9F\\x03D\\x03\\xA0\\x030\\x01T\\x03A\\x033\\x007\\x00\\xAA\\x01_\\x00\\xA9\\x02\\xD3\\x02\\xCF\\x01\\x1F\\x01\\xAC\\x03M\\x03\\xA9\\x02M\\x030\\x01b\\x03\\xA0\\x030\\x02\\x0C\\x03\\xA9\\x03\\xF1\\x02M\\x03\\x1B\\x01E\\x03\\x84\\x03\\x1B\\x01$\\x00V\\x00=\\x00-\\x001\\x00|\\x00c\\x00$\\x00S\\x00=\\x00\\xC4\\x02b\\x00\\xD0\\x027\\x00_\\x00&\\x01$\\x00u\\x00r\\x00l\\x00=\\x009\\x01;\\x01=\\x01?\\x01D\\x01e\\x016\\x00$\\x03&\\x03n\\x00(\\x03*\\x03,"
		"\\x03G\\x01.\\x03i\\x011\\x033\\x03\\x9B\\x03B\\x01A\\x01\\xCE\\x01B\\x01$\\x00\\xBD\\x01t\\x00\\x93\\x02=\\x00G\\x00\\x91\\x02w\\x00P\\x00r\\x00%\\x03'\\x03\\xD9\\x02U\\x00\\xD0\\x03\\xD2\\x03:\\x01<\\x01>\\x01@\\x01\\xE6\\x03B\\x01#\\x03\\xF3\\x03\\xDB\\x03\\xDD\\x03t\\x00+\\x03-\\x03h\\x010\\x03P\\x01\\x9A\\x03`\\x01\\xFE\\x03\\xE8\\x03F\\x00s\\x00r\\x01s\\x00B\\x02D\\x01n\\x00[\\x01\\xD9\\x02T\\x00L\\x01\\xED\\x03-\\x00$\\x00l\\x00\\xBC\\x01C\\x00\\xD1\\x02\\x00\\x01c\\x01="
		"\\x00M\\x00y\\x00A\\x00c\\x01$\\x00f\\x00\\xBE\\x023\\x00\\xEB\\x029\\x00\\x88\\x02o\\x039\\x00\\xE1\\x02$\\x00v\\x00\\x02\\x010\\x001\\x002\\x00!\\x01\\xA7\\x03(\\x011\\x00\\x17\\x01\\xA9\\x01\\x1A\\x01\\xEA\\x03i\\x00m\\x00e\\x00\\xC9\\x02\\x86\\x027\\x000\\x020\\x00", 
		LAST);

	web_custom_request("dynaTraceMonitor_2", 
		"URL=https://g6pricing-stg.g6hospitality.com/rest//dynatrace/dynaTraceMonitor?type=js&flavor=post&referer=https%3A%2F%2Fg6pricing-stg.g6hospitality.com%2F%23%2F&app=MyApp&format=lzw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://g6pricing-stg.g6hospitality.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=$\\x00b\\x00w\\x00=\\x007\\x00_\\x003\\x009\\x003\\x00$\\x00f\\x00I\\x00d\\x00=\\x003\\x003\\x005\\x007\\x001\\x009\\x005\\x001\\x008\\x00_\\x009\\x00\\x12\\x01$\\x00v\\x00=\\x001\\x000\\x001\\x002\\x003\\x001\\x007\\x000\\x007\\x002\\x001\\x001\\x005\\x004\\x000\\x00\\x06\\x01$\\x00u\\x00r\\x00l\\x00=\\x00h\\x00t\\x00t\\x00p\\x00s\\x00%\\x003\\x00A\\x00%\\x002\\x00F\\x00:\\x01F\\x00g\\x006\\x00p\\x00r\\x00i\\x00c\\x00i\\x00n\\x00g\\x00-\\x00s\\x00t\\x00g\\x00.\\x00?"
		"\\x01h\\x00o\\x00s\\x00p\\x00i\\x00t\\x00a\\x00l\\x00R\\x01y\\x00.\\x00c\\x00o\\x00m\\x00=\\x01:\\x013\\x00=\\x01$\\x00t\\x00R\\x01l\\x00e\\x00=\\x00G\\x00r\\x00o\\x00w\\x00P\\x00B\\x01D\\x01F\\x01$\\x00l\\x00a\\x00t\\x00C\\x00=\\x005\\x006\\x00$\\x00a\\x00p\\x00p\\x00=\\x00M\\x00y\\x00A\\x00x\\x01\t\\x01\\x0B\\x01\r\\x01\\x0F\\x01\\x11\\x01\\x13\\x01\\x15\\x01\\x17\\x01\\x19\\x01\\x1B\\x01\\x1D\\x01\\x1F\\x01!\\x01#\\x01%\\x01'\\x01)\\x01+\\x019\\x00`\\x01i\\x00m\\x00d\\x01"
		"(\\x01\\x90\\x01\\x82\\x012\\x00\\x13\\x01%\\x01", 
		LAST);

	web_add_cookie("dtPC=335719518_919h10; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_add_cookie("dtSa=-; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_add_cookie("dtLatC=60; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_add_cookie("_ga=GA1.2.715868653.1503935723; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_add_cookie("_gid=GA1.2.1471364405.1503935723; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_add_cookie("_gat=1; DOMAIN=g6pricing-stg.g6hospitality.com");

	web_custom_request("8640d6d5-ab99-4a95-8796-f1f64f331751", 
		"URL=https://g6pricing-stg.g6hospitality.com/rest/login/8640d6d5-ab99-4a95-8796-f1f64f331751", 
		"Method=DELETE", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://g6pricing-stg.g6hospitality.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dynaTraceMonitor_3", 
		"URL=https://g6pricing-stg.g6hospitality.com/rest//dynatrace/dynaTraceMonitor?type=js&flavor=post&referer=https%3A%2F%2Fg6pricing-stg.g6hospitality.com%2F%23%2F&app=MyApp&format=lzw", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://g6pricing-stg.g6hospitality.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=$\\x00a\\x00=\\x001\\x00%\\x007\\x00C\\x009\\x00\\x04\\x01C\\x00L\\x00O\\x00G\\x00O\\x00U\\x00T\\x00\\x08\\x01C\\x00\\x08\\x01j\\x002\\x00.\\x00\\x14\\x014\\x00\\x08\\x011\\x005\\x000\\x003\\x009\\x003\\x005\\x007\\x003\\x00!\\x019\\x007\\x00\\x08\\x010\\x00\\x08\\x012\\x008\\x002\\x00\\x08\\x01-\\x00+\\x01\\x08\\x01%\\x002\\x00F\\x00s\\x00a\\x00m\\x00l\\x00/\\x01F\\x00l\\x00o\\x00g\\x00i\\x00n\\x00C\\x00o\\x00n\\x00f\\x00i\\x00g\\x00-\\x01\\x05\\x01,\\x01D\\x01'\\x01&"
		"\\x01\\x05\\x012\\x00$\\x012\\x00C\\x00*\\x01\\x05\\x011\\x00H\\x01C\\x00\\x13\\x01\\x15\\x01.\\x00\\x17\\x01\\x05\\x01x\\x00h\\x00r\\x00\\x12\\x01\\x14\\x01\\x16\\x01\\x18\\x01\\x1A\\x01\\x1C\\x01\\x1E\\x01 \\x013\\x004\\x002\\x006\\x00%\\x01'\\x01)\\x01C\\x01C\\x00E\\x01\\x11\\x010\\x01r\\x00e\\x00s\\x00t\\x006\\x018\\x01"
		":\\x01n\\x006\\x018\\x006\\x004\\x000\\x00d\\x006\\x00d\\x005\\x00-\\x00a\\x00b\\x009\\x009\\x00-\\x004\\x00a\\x009\\x00\\x7F\\x018\\x007\\x009\\x006\\x00-\\x00f\\x001\\x00f\\x00y\\x01f\\x00!\\x011\\x007\\x005\\x00\\x03\\x01F\\x01\\x99\\x01k\\x01\\x18\\x01\\x08\\x017\\x007\\x00$\\x00r\\x00I\\x00d\\x00=\\x00R\\x00I\\x00D\\x00_\\x002\\x004\\x001\\x008\\x00\\xA0\\x01p\\x00\\xA2\\x01\\x02\\x013\\x00)"
		"\\x012\\x00\\x1A\\x01\\x97\\x010\\x00$\\x00d\\x00o\\x00m\\x00R\\x00\\x02\\x01_\\x01\\x1D\\x01\\x1F\\x01\\xA9\\x011\\x006\\x001\\x00$\\x00u\\x00n\\x008\\x01a\\x00\\xA3\\x01X\\x01r\\x00$\\x00b\\x00w\\x00=\\x007\\x00_\\x00`\\x01\\xC4\\x01r\\x00l\\x00=\\x00h\\x00t\\x00t\\x00p\\x00s\\x00%\\x003\\x00A\\x006\\x016\\x01g\\x006\\x00p\\x00r\\x00i\\x00c\\x00;"
		"\\x01g\\x00-\\x00q\\x01g\\x00.\\x00\\xE1\\x01h\\x00o\\x00s\\x00p\\x00i\\x00t\\x00a\\x00l\\x00\\xF2\\x01y\\x00.\\x00c\\x00\\xB9\\x01\\xDF\\x012\\x003\\x006\\x01$\\x00t\\x00\\xF2\\x01l\\x00e\\x00=\\x00G\\x00r\\x00o\\x00w\\x00P\\x00\\xE4\\x01\\xE6\\x01n\\x00g\\x00$\\x00v\\x00\\xA3\\x01\\x1C\\x017\\x00\\xC3\\x01i\\x00s\\x00U\\x00\\xC6\\x01o\\x00\\xC8\\x01=\\x00t\\x00r\\x00u\\x00e\\x00$\\x00l\\x00a\\x00t\\x00C\\x00=\\x006\\x00\\xB6\\x01a\\x00p\\x00p\\x00=\\x00M\\x00y\\x00A\\x00"
		"(\\x02$\\x00f\\x00\\xAF\\x01!\\x01\\x1F\\x011\\x00\\x88\\x01\\xAB\\x01_\\x009\\x004\\x02\\x0E\\x02\\x02\\x010\\x001\\x00\\xFC\\x01\\x95\\x010\\x007\\x002\\x001\\x00\\x19\\x01z\\x01\\x1C\\x01\\xFF\\x01i\\x00m\\x00\\x03\\x02\\x19\\x01\\x1B\\x01\\xBE\\x01b\\x016\\x007\\x000\\x00", 
		LAST);

	web_url("login_3", 
		"URL=https://stg.g6row.com/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://g6pricing-stg.g6hospitality.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}