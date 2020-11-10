//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableData;

@interface SentryCrashJSONCodec : NSObject
{
    _Bool _prettyPrint;
    _Bool _sorted;
    _Bool _ignoreNullsInArrays;
    _Bool _ignoreNullsInObjects;
    id _topLevelContainer;
    id _currentContainer;
    NSMutableArray *_containerStack;
    struct SentryCrashJSONDecodeCallbacks *_callbacks;
    NSMutableData *_serializedData;
    NSError *_error;
}

+ (id)decode:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)encode:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)codecWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreNullsInObjects; // @synthesize ignoreNullsInObjects=_ignoreNullsInObjects;
@property(nonatomic) _Bool ignoreNullsInArrays; // @synthesize ignoreNullsInArrays=_ignoreNullsInArrays;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(nonatomic) _Bool prettyPrint; // @synthesize prettyPrint=_prettyPrint;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *serializedData; // @synthesize serializedData=_serializedData;
@property(nonatomic) struct SentryCrashJSONDecodeCallbacks *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property(nonatomic) id currentContainer; // @synthesize currentContainer=_currentContainer;
@property(retain, nonatomic) id topLevelContainer; // @synthesize topLevelContainer=_topLevelContainer;
- (void)dealloc;
- (id)initWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2;

@end
