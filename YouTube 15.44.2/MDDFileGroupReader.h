//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationInstanceID><MDDConfigurationBundleID><MDDConfigurationStorageEnvironment;

@interface MDDFileGroupReader : NSObject
{
    id <MDDConfigurationFlags><MDDConfigurationLogger><MDDConfigurationInstanceID><MDDConfigurationBundleID><MDDConfigurationStorageEnvironment> _configuration;
}

+ (id)readerWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)readLatestCompletedWithName:(id)arg1 fromURLs:(id)arg2 URL:(id *)arg3;
- (id)readLatestFilegroupWithName:(id)arg1 URL:(id *)arg2;
- (id)readLatestCompletedWithName:(id)arg1 URL:(id *)arg2;
- (id)completedFileGroupsWithNames:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

