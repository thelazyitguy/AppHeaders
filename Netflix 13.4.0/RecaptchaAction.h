//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, _TtC49googlemac_iPhone_recaptcha_recaptcha_action_swift20RecaptchaActionSwift;

@interface RecaptchaAction : NSObject
{
    _TtC49googlemac_iPhone_recaptcha_recaptcha_action_swift20RecaptchaActionSwift *_swiftAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraParameters;
@property(readonly, nonatomic) NSString *customAction;
@property(readonly, nonatomic) long long action;
- (id)initWithCustomAction:(id)arg1 extraParameters:(id)arg2;
- (id)initWithAction:(long long)arg1 extraParameters:(id)arg2;
- (id)initWithCustomAction:(id)arg1;
- (id)initWithAction:(long long)arg1;

@end

