//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, NSURL;

@protocol _TtP11TextService19TestableFileManager_
- (_Bool)createDirectoryAtPath:(NSString *)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(NSDictionary *)arg3 error:(id *)arg4;
- (_Bool)removeItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(NSString *)arg1;
- (NSArray *)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
@end
