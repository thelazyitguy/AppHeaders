//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC6Reddit28AppleIdentityProviderService, _TtC6Reddit29GoogleIdentityProviderService;

@interface _TtC6Reddit23IdentityProviderService : NSObject
{
    // Error parsing type: , name: google
    // Error parsing type: , name: _appleService
}

+ (id)makeIdentityProviderService;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGoogleService:(id)arg1 appleService:(id)arg2;
- (id)initWithGoogleService:(id)arg1;
@property(nonatomic, readonly) _TtC6Reddit28AppleIdentityProviderService *apple;
@property(nonatomic, readonly) _TtC6Reddit29GoogleIdentityProviderService *google; // @synthesize google;

@end
