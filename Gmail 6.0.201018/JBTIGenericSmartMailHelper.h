//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesCommonUtilsCachedValue, JBTISmartMailComponentContextImpl;
@protocol JBTISmartMailLayoutFactory;

@interface JBTIGenericSmartMailHelper : NSObject
{
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *cachedOptionalSummaryLayout_;
    ComGoogleAppsBigtopServicesCommonUtilsCachedValue *cachedOptionalDetailedLayout_;
    id <JBTISmartMailLayoutFactory> layoutFactory_;
    JBTISmartMailComponentContextImpl *context_;
}

- (void)dealloc;
- (_Bool)hasLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(id)arg1;

@end
