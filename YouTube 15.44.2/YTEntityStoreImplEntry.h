//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YTMonotonicDate;
@protocol YTEntity><YTEntity_Private;

@interface YTEntityStoreImplEntry : NSObject
{
    id <YTEntity><YTEntity_Private> _entity;
    YTMonotonicDate *_keepUntil;
    double _batchUpdateTimestamp;
}

+ (id)entryWithEntity:(id)arg1 keepUntil:(id)arg2 batchUpdateTimestamp:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double batchUpdateTimestamp; // @synthesize batchUpdateTimestamp=_batchUpdateTimestamp;
@property(copy, nonatomic) YTMonotonicDate *keepUntil; // @synthesize keepUntil=_keepUntil;
@property(readonly, nonatomic) id <YTEntity><YTEntity_Private> entity; // @synthesize entity=_entity;
- (id)initWithEntity:(id)arg1 keepUntil:(id)arg2 batchUpdateTimestamp:(double)arg3;

@end

