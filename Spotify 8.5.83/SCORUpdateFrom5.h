//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCORUpdateFrom5 : NSObject
{
}

- (void)removeFiles:(id)arg1;
- (id)retrieveEventsFormCacheFiles:(id)arg1;
- (id)getFolderPath;
- (id)getArrayOfCacheFileNames;
- (void)libraryPostUpdateWithNewData:(struct PropertyManager *)arg1 withOfflineCache:(struct OfflineCache *)arg2;
- (void)libraryUpdateWithNewData:(struct PropertyManager *)arg1;
- (id)init;

@end
