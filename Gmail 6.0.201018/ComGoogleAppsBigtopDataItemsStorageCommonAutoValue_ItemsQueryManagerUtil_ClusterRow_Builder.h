//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsStorageCommonItemsQueryManagerUtil_ClusterRow_Builder.h"

@class JavaLangLong, NSString;
@protocol DaggerLazy;

@interface ComGoogleAppsBigtopDataItemsStorageCommonAutoValue_ItemsQueryManagerUtil_ClusterRow_Builder : ComGoogleAppsBigtopDataItemsStorageCommonItemsQueryManagerUtil_ClusterRow_Builder
{
    NSString *serverPermId_;
    NSString *rank_;
    JavaLangLong *writeSequenceId_;
    id <DaggerLazy> cluster_;
    JavaLangLong *displayTimestampMs_;
}

- (void)dealloc;
- (id)build;
- (id)setDisplayTimestampMsWithJavaLangLong:(id)arg1;
- (id)setClusterWithDaggerLazy:(id)arg1;
- (id)setWriteSequenceIdWithJavaLangLong:(id)arg1;
- (id)setRankWithNSString:(id)arg1;
- (id)setServerPermIdWithNSString:(id)arg1;

@end
