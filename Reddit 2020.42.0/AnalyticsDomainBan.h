//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsDomainBan : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _urlIsSet;
    _Bool _markdown;
    _Bool _markdownIsSet;
    _Bool _no_email;
    _Bool _no_emailIsSet;
    _Bool _shame;
    _Bool _shameIsSet;
    _Bool _disable_approve;
    _Bool _disable_approveIsSet;
    _Bool _ban_messageIsSet;
    _Bool _shame_messageIsSet;
    _Bool _regexIsSet;
    _Bool _inspector_exempt_regexIsSet;
    _Bool _submit_banned;
    _Bool _submit_bannedIsSet;
    NSString *_url;
    NSString *_ban_message;
    NSString *_shame_message;
    NSString *_regex;
    NSString *_inspector_exempt_regex;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool submit_bannedIsSet; // @synthesize submit_bannedIsSet=_submit_bannedIsSet;
@property(nonatomic) _Bool submit_banned; // @synthesize submit_banned=_submit_banned;
@property(nonatomic) _Bool inspector_exempt_regexIsSet; // @synthesize inspector_exempt_regexIsSet=_inspector_exempt_regexIsSet;
@property(copy, nonatomic) NSString *inspector_exempt_regex; // @synthesize inspector_exempt_regex=_inspector_exempt_regex;
@property(nonatomic) _Bool regexIsSet; // @synthesize regexIsSet=_regexIsSet;
@property(copy, nonatomic) NSString *regex; // @synthesize regex=_regex;
@property(nonatomic) _Bool shame_messageIsSet; // @synthesize shame_messageIsSet=_shame_messageIsSet;
@property(copy, nonatomic) NSString *shame_message; // @synthesize shame_message=_shame_message;
@property(nonatomic) _Bool ban_messageIsSet; // @synthesize ban_messageIsSet=_ban_messageIsSet;
@property(copy, nonatomic) NSString *ban_message; // @synthesize ban_message=_ban_message;
@property(nonatomic) _Bool disable_approveIsSet; // @synthesize disable_approveIsSet=_disable_approveIsSet;
@property(nonatomic) _Bool disable_approve; // @synthesize disable_approve=_disable_approve;
@property(nonatomic) _Bool shameIsSet; // @synthesize shameIsSet=_shameIsSet;
@property(nonatomic) _Bool shame; // @synthesize shame=_shame;
@property(nonatomic) _Bool no_emailIsSet; // @synthesize no_emailIsSet=_no_emailIsSet;
@property(nonatomic) _Bool no_email; // @synthesize no_email=_no_email;
@property(nonatomic) _Bool markdownIsSet; // @synthesize markdownIsSet=_markdownIsSet;
@property(nonatomic) _Bool markdown; // @synthesize markdown=_markdown;
@property(nonatomic) _Bool urlIsSet; // @synthesize urlIsSet=_urlIsSet;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSubmit_banned;
- (void)unsetInspector_exempt_regex;
- (void)unsetRegex;
- (void)unsetShame_message;
- (void)unsetBan_message;
- (void)unsetDisable_approve;
- (void)unsetShame;
- (void)unsetNo_email;
- (void)unsetMarkdown;
- (void)unsetUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrl:(id)arg1 markdown:(_Bool)arg2 no_email:(_Bool)arg3 shame:(_Bool)arg4 disable_approve:(_Bool)arg5 ban_message:(id)arg6 shame_message:(id)arg7 regex:(id)arg8 inspector_exempt_regex:(id)arg9 submit_banned:(_Bool)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
