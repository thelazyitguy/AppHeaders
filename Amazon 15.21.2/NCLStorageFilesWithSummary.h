//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NCLStorageFilesWithSummary : NSObject
{
    NSMutableArray *_files;
    long long _numberOfEvents;
}

@property(readonly, nonatomic) long long numberOfEvents; // @synthesize numberOfEvents=_numberOfEvents;
@property(readonly, nonatomic) NSMutableArray *files; // @synthesize files=_files;
- (void).cxx_destruct;
- (id)initWithFiles:(id)arg1 andEvents:(long long)arg2;

@end
