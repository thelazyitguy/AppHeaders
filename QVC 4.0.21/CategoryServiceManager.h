//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseServiceHandler.h"

@class NSString;

@interface CategoryServiceManager : BaseServiceHandler
{
    NSString *sectionName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName;
- (void)requestFail:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)fetchSubCategoryWithTransaction:(id)arg1 withStoreID:(id)arg2 withCatelogID:(id)arg3 withLangId:(id)arg4 eSpotName:(id)arg5 categoryName:(id)arg6 target:(id)arg7 CacheDuration:(long long)arg8;
- (void)fetchSubCategoryWithTransaction:(id)arg1 withStoreID:(id)arg2 withCatelogID:(id)arg3 withLangId:(id)arg4 eSpotName:(id)arg5 categoryName:(id)arg6 target:(id)arg7;
- (void)fetchSubCategoryWithTransaction:(id)arg1 withStoreID:(id)arg2 withCatelogID:(id)arg3 withLangId:(id)arg4 parentCategoryRefinedId:(id)arg5 childCategoryRefinedList:(id)arg6 categoryName:(id)arg7 target:(id)arg8 CacheDuration:(long long)arg9;
- (void)fetchSubCategoryWithTransaction:(id)arg1 withStoreID:(id)arg2 withCatelogID:(id)arg3 withLangId:(id)arg4 parentCategoryRefinedId:(id)arg5 childCategoryRefinedList:(id)arg6 categoryName:(id)arg7 target:(id)arg8;
- (void)dealloc;

@end
