//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLSegment.h>

@class NSManagedObjectID, NSString;

@interface MLLocalSegment : MLSegment
{
    _Bool _complete;
    NSManagedObjectID *_objectID;
    NSString *_path;
    long long _size;
    double _duration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)initWithMediaID:(id)arg1 itag:(int)arg2 index:(int)arg3;
- (id)initWithObjectID:(id)arg1 path:(id)arg2 mediaID:(id)arg3 itag:(int)arg4 index:(int)arg5 size:(long long)arg6 duration:(double)arg7 complete:(_Bool)arg8;

@end

