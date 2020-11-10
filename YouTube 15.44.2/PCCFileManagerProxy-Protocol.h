//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol PCCFileManagerProxy <NSObject>
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)fileExistsAtPath:(NSString *)arg1;
- (_Bool)removeItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)createFileAtPath:(NSString *)arg1 contents:(NSData *)arg2 attributes:(NSDictionary *)arg3;
@end

