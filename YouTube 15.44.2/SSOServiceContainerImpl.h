//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOServiceContainer-Protocol.h"
#import "SSOServiceMutableContainer-Protocol.h"

@class NSString;
@protocol SSOService;

@interface SSOServiceContainerImpl : NSObject <SSOServiceContainer, SSOServiceMutableContainer>
{
    id <SSOService> _ssoService;
}

- (void).cxx_destruct;
- (void)setSSOService:(id)arg1;
@property(readonly, nonatomic) id <SSOService> ssoService;
- (id)initWithSSOService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
