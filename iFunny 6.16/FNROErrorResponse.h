//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class NSNumber, NSString;

@interface FNROErrorResponse : NSObject <IFNetworkResponseMappable>
{
    _Bool isErrorHandled;
    NSNumber *_status;
    NSString *_error;
    NSString *_error_description;
    NSString *_user_message;
    NSString *_captcha_url;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *captcha_url; // @synthesize captcha_url=_captcha_url;
@property(retain, nonatomic) NSString *user_message; // @synthesize user_message=_user_message;
@property(retain, nonatomic) NSString *error_description; // @synthesize error_description=_error_description;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void)handleError;
- (_Bool)hasCaptcha;
- (_Bool)hasErrorDescription:(id)arg1;
- (_Bool)hasAnyErrorDescription;
- (_Bool)hasErrorWithTitle:(id)arg1;
- (_Bool)hasStatusCode:(long long)arg1;

@end
