//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromise, JavaLangLong;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataStorageSchemaItemMessageTombstoneDao <JavaObject>
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteAll;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)deleteByRowIdListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryRowIdWhereWriteSequenceIdLteWithJavaLangLong:(JavaLangLong *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryUniqueWriteSequenceIdEqWithJavaLangLong:(JavaLangLong *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryWriteSequenceIdEqWithJavaLangLong:(JavaLangLong *)arg1;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)queryWriteSequenceIdGteWithJavaLangLong:(JavaLangLong *)arg1 withInt:(int)arg2;
- (ComGoogleAppsXplatStorageDbTransactionPromise *)insertWithJavaUtilList:(id <JavaUtilList>)arg1;
@end
