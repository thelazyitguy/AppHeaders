//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsDynamiteV1SharedUtilNameUtil, DYNSCapabilitiesApiSharedGroupScopedCapabilitiesFactory, DYNSCommonHelperGroupAttributesInfoHelper, DYNSFlagsSharedConfiguration;

@interface DYNSDataUiGroupConverter : NSObject
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSCommonHelperGroupAttributesInfoHelper> groupAttributesInfoHelper_;
    id <ComGoogleAppsDynamiteV1SharedUtilNameUtil> nameUtil_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    id <DYNSCapabilitiesApiSharedGroupScopedCapabilitiesFactory> sharedGroupScopedCapabilitiesFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)convertWithDYNSDataModelsGroup:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)convertWithDYNSDataModelsGroup:(id)arg1;

@end
