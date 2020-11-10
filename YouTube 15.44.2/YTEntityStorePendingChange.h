//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XFieldMaskMergeOptions, YTXFieldMask;
@protocol YTEntity;

@interface YTEntityStorePendingChange : NSObject
{
    unsigned int _options;
    long long _operation;
    NSString *_entityKey;
    id <YTEntity> _entity;
    YTXFieldMask *_mask;
    XFieldMaskMergeOptions *_maskMergeOptions;
}

+ (id)pendingDeleteWithEntityKey:(id)arg1 options:(unsigned int)arg2;
+ (id)pendingDeleteWithEntityKey:(id)arg1;
+ (id)pendingUpdateWithEntity:(id)arg1 options:(unsigned int)arg2 mask:(id)arg3 maskMergeOptions:(id)arg4;
+ (id)pendingAddOrReplaceWithEntity:(id)arg1 options:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) XFieldMaskMergeOptions *maskMergeOptions; // @synthesize maskMergeOptions=_maskMergeOptions;
@property(readonly, copy, nonatomic) YTXFieldMask *mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(readonly, nonatomic) id <YTEntity> entity; // @synthesize entity=_entity;
@property(readonly, copy, nonatomic) NSString *entityKey; // @synthesize entityKey=_entityKey;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
- (id)initWithOperation:(long long)arg1 entityKey:(id)arg2 entity:(id)arg3 options:(unsigned int)arg4 mask:(id)arg5 maskMergeOptions:(id)arg6;

@end

