//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface DTBWebResourceService : NSObject
{
    _Bool inProgress;
    NSMutableArray *completionStatus;
    _Bool requestStatus;
    NSArray *_jsFiles;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *jsFiles; // @synthesize jsFiles=_jsFiles;
- (void).cxx_destruct;
- (id)readLocalJSFile:(id)arg1;
- (void)createLocalJSFile:(id)arg1 withContent:(id)arg2;
- (void)createJSDirectoryIfNotExists;
- (void)cleanup;
- (void)verifyCompletion;
- (void)loadJavaScript:(id)arg1 index:(long long)arg2;
- (void)retrieveLocalFiles;
- (void)updateLocalResources;
- (id)init;

@end
