//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SearchResultNavigationProtocol-Protocol.h"

@class NSString;

@interface NativeUrlNavigator : NSObject <SearchResultNavigationProtocol>
{
}

+ (void)getSearchHelper:(id)arg1;
+ (void)launchDeepLinkingPage:(id)arg1;
+ (void)doPrint:(id)arg1;
+ (void)openInSafari:(id)arg1;
+ (void)handleZeroSearchResult:(id)arg1;
+ (void)pushViewComtroller:(id)arg1 animated:(_Bool)arg2;
+ (id)getCurrentTopController;
+ (void)doAction:(id)arg1;
+ (void)pushControllerAsynchronouslyWithURL:(id)arg1;
+ (id)fetchViewController:(id)arg1;
+ (id)fetchFlowController:(id)arg1;
+ (void)navigateToUrl:(id)arg1;
+ (void)setOpenedURL:(id)arg1;
+ (_Bool)isURLDuplicated:(id)arg1;
+ (id)createNativeURL:(id)arg1;
+ (id)getQVCURI;
+ (void)setDestinationPathForMMCTag:(id)arg1;
+ (void)appSettingDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
