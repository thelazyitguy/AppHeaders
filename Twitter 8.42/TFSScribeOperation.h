//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TFSScribeDatabaseProvider;

@interface TFSScribeOperation : NSOperation
{
    TFSScribeDatabaseProvider *_databaseProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSScribeDatabaseProvider *databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (_Bool)enqueueEvents:(id)arg1 didEnqueueEvent:(CDUnknownBlockType)arg2 connection:(id)arg3 groupPersistence:(id)arg4;
- (id)initWithDatabaseProvider:(id)arg1;

@end
