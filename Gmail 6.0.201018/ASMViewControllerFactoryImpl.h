//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASMViewControllerFactory-Protocol.h"

@class ASMViewModelFactory, NSString;
@protocol OGLAccountService, OGLProfileSource, SSOService;

@interface ASMViewControllerFactoryImpl : NSObject <ASMViewControllerFactory>
{
    _Bool _useUIKit;
    ASMViewModelFactory *_viewModelFactory;
    id <SSOService> _ssoService;
    id <OGLProfileSource> _oglProfileSource;
    id <OGLAccountService> _oglAccountService;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useUIKit; // @synthesize useUIKit=_useUIKit;
@property(retain, nonatomic) id <OGLAccountService> oglAccountService; // @synthesize oglAccountService=_oglAccountService;
@property(retain, nonatomic) id <OGLProfileSource> oglProfileSource; // @synthesize oglProfileSource=_oglProfileSource;
@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) ASMViewModelFactory *viewModelFactory; // @synthesize viewModelFactory=_viewModelFactory;
- (id)createNavigationBarIdentityViewController;
- (id)createHeaderIdentityDiscControllerWithWelcomHeaderKey:(id)arg1;
- (id)createIdentityViewControllerWithWelcomeHeaderKey:(id)arg1 behavior:(long long)arg2;
- (id)createLoadingScreenViewControllerWithScreenKey:(id)arg1;
- (id)createCardScreenViewControllerWithScreenKey:(id)arg1;
- (id)createHeaderViewControllerForBlueprint:(id)arg1;
- (id)createBottomNavigationContentControllerForBlueprint:(id)arg1;
- (id)createViewControllerForBlueprint:(id)arg1;
- (id)initWithViewModelFactory:(id)arg1 ssoService:(id)arg2 oglProfileSource:(id)arg3 oglAccountService:(id)arg4 useUIKit:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
