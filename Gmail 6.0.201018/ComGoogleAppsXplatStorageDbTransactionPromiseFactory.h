//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsXplatStorageDbAbstractDatabase;

@interface ComGoogleAppsXplatStorageDbTransactionPromiseFactory : NSObject
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

- (void)dealloc;
- (id)allSequentiallyWithJavaUtilList:(id)arg1;
- (id)allSequentiallyWithJavaLangIterable:(id)arg1;
- (id)reduceWithJavaUtilList:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg3 withComGoogleAppsXplatUtilFunctionBiFunction:(id)arg4;
- (id)allConcatenatedWithJavaUtilCollection:(id)arg1;
- (id)allVoidWithJavaUtilCollection:(id)arg1;
- (id)allAsListWithJavaUtilCollection:(id)arg1;
- (id)immediateFailWithJavaLangThrowable:(id)arg1;
- (id)transactionStartTimeMillis;
- (id)nativeTransaction;
- (id)transactionUserDataWithId:(id)arg1 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg2 withComGoogleCommonBaseSupplier:(id)arg3;
- (id)transaction;
- (id)immediateVoid;
- (id)deferredWithComGoogleCommonBaseSupplier:(id)arg1;
- (id)immediateWithId:(id)arg1;
- (id)allChainedWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg4 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg5 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg6 withComGoogleAppsXplatUtilFunctionFunction5:(id)arg7;
- (id)allChainedWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg4 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg5 withComGoogleAppsXplatUtilFunctionFunction4:(id)arg6;
- (id)allChainedWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg4 withComGoogleAppsXplatUtilFunctionFunction3:(id)arg5;
- (id)allChainedWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionScope:(id)arg3 withComGoogleAppsXplatUtilFunctionBiFunction:(id)arg4;
- (id)allWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg4 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg5 withComGoogleAppsXplatUtilFunctionFunction5:(id)arg6;
- (id)allWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg4 withComGoogleAppsXplatUtilFunctionFunction4:(id)arg5;
- (id)allWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg3 withComGoogleAppsXplatUtilFunctionFunction3:(id)arg4;
- (id)allWithComGoogleAppsXplatStorageDbTransactionPromise:(id)arg1 withComGoogleAppsXplatStorageDbTransactionPromise:(id)arg2 withComGoogleAppsXplatUtilFunctionBiFunction:(id)arg3;

@end
