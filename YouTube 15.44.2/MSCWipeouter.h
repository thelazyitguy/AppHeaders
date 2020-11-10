//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSCFileManager, MSCFlags;
@protocol MDILogger;

@interface MSCWipeouter : NSObject
{
    MSCFlags *_flags;
    id <MDILogger> _logger;
    MSCFileManager *_fileManager;
}

+ (id)wipeouterWithFlags:(id)arg1 logger:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (void)cleanExpiredCacheEntriesAtURL:(id)arg1;
- (void)wipeout;
- (id)initWithFlags:(id)arg1 logger:(id)arg2;

@end

