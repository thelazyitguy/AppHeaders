//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtP11FeatureAPIs25ERNFeatureHeaderViewModel_-Protocol.h>

@class UIBarButtonItem;

@protocol _TtP11FeatureAPIs31ERNFeatureLegacyHeaderViewModel_ <_TtP11FeatureAPIs25ERNFeatureHeaderViewModel_>
@property(nonatomic, readonly) UIBarButtonItem *leftNavBarButtonItem;
- (_Bool)shouldHideBackButton;
- (void)rightBarButtonItemActionTriggered;
- (void)leftBarButtonItemActionTriggered;

@optional
@property(nonatomic, readonly) UIBarButtonItem *rightNavBarButtonItem;
@end
