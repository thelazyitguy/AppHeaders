//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "ComGoogleAppsViewerClientProtoEnumParam-Protocol.h"

@class NSString, ViewerProtoEnums_PurposeId;

@interface ComGoogleAppsViewerClientPurpose : JavaLangEnum <ComGoogleAppsViewerClientProtoEnumParam>
{
    NSString *param_;
    ViewerProtoEnums_PurposeId *purposeId_;
}

+ (void)initialize;
+ (id)values;
- (unsigned long long)toNSEnum;
- (id)toProto;
- (id)getParam;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
