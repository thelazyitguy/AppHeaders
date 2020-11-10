//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface ORCH2UrlRedirectData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool acceptThirdPartyCookies; // @dynamic acceptThirdPartyCookies;
@property(nonatomic) _Bool hasAcceptThirdPartyCookies; // @dynamic hasAcceptThirdPartyCookies;
@property(nonatomic) _Bool hasInterceptNonTerminalURLRegex; // @dynamic hasInterceptNonTerminalURLRegex;
@property(nonatomic) _Bool hasInterceptTerminalURLRegex; // @dynamic hasInterceptTerminalURLRegex;
@property(nonatomic) _Bool hasRedirectMode; // @dynamic hasRedirectMode;
@property(nonatomic) _Bool hasRequestPostBody; // @dynamic hasRequestPostBody;
@property(nonatomic) _Bool hasRequestURL; // @dynamic hasRequestURL;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(copy, nonatomic) NSString *interceptNonTerminalURLRegex; // @dynamic interceptNonTerminalURLRegex;
@property(copy, nonatomic) NSString *interceptTerminalURLRegex; // @dynamic interceptTerminalURLRegex;
@property(nonatomic) int redirectMode; // @dynamic redirectMode;
@property(copy, nonatomic) NSString *requestPostBody; // @dynamic requestPostBody;
@property(copy, nonatomic) NSString *requestURL; // @dynamic requestURL;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(retain, nonatomic) NSMutableArray *whitelistURLRegexArray; // @dynamic whitelistURLRegexArray;
@property(readonly, nonatomic) unsigned long long whitelistURLRegexArray_Count; // @dynamic whitelistURLRegexArray_Count;

@end
