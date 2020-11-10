//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/UserAuthenticationDataProvider-Protocol.h>

@protocol NetflixUserAuthenticationData, NfRegistrationController;

@interface DefaultUserAuthenticationDataProvider : NSObject <UserAuthenticationDataProvider>
{
    _Bool _isReady;
    id <NfRegistrationController> _controller;
}

- (void).cxx_destruct;
@property _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly) id <NfRegistrationController> controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) NSObject<NetflixUserAuthenticationData> *userAuthData;
- (void)setRegistrationController:(id)arg1;
- (id)initWithRegistrationController:(id)arg1;

@end
