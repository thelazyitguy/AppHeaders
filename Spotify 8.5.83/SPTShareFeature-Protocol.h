//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSArray, NSString, NSURL, UIViewController;
@protocol SPTShareDestination, SPTShareDragDelegateFactory, SPTShareEntityData, SPTShareEntityDataFactory, SPTShareVideoDataProviderRegistry;

@protocol SPTShareFeature <SPTService>
- (void)performShareToDestination:(id <SPTShareDestination>)arg1 withShareEntityData:(id <SPTShareEntityData>)arg2 contextViewController:(UIViewController *)arg3 completion:(void (^)(id <SPTShareHandlerCompletionData>, NSError *))arg4;
- (void)provideShareDestinationsForEntityURI:(NSURL *)arg1 forIntegration:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (id <SPTShareVideoDataProviderRegistry>)provideShareVideoDataProviderRegistry;
- (id <SPTShareDragDelegateFactory>)provideShareDragDelegateFactory;
- (id <SPTShareEntityDataFactory>)provideShareEntityDataFactory;
- (void)presentShareViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)presentShareViewController:(UIViewController *)arg1;
- (UIViewController *)provideShareViewControllerForShareEntityData:(id <SPTShareEntityData>)arg1 withShareDestinations:(NSArray *)arg2;
- (UIViewController *)provideShareViewControllerForShareEntityData:(id <SPTShareEntityData>)arg1;
@end

