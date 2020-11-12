//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;
@protocol GRWAuthenticationDelegate, SSOService;

@interface GRWGrowthKitOptions : NSObject
{
    NSBundle *_hostBundle;
    NSString *_APIKey;
    long long _UIStyleMode;
    id <SSOService> _authService;
    id <GRWAuthenticationDelegate> _authDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GRWAuthenticationDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(nonatomic) __weak id <SSOService> authService; // @synthesize authService=_authService;
@property(nonatomic) long long UIStyleMode; // @synthesize UIStyleMode=_UIStyleMode;
@property(nonatomic) __weak NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(nonatomic) __weak NSBundle *hostBundle; // @synthesize hostBundle=_hostBundle;

@end
