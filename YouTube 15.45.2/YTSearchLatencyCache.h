//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTMonotonicDate;

@interface YTSearchLatencyCache : NSObject
{
    GIMMe *_gimme;
    YTMonotonicDate *_searchUIOnFocusEventDate;
    YTMonotonicDate *_searchRequestClientPackagingEventDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTMonotonicDate *searchRequestClientPackagingEventDate; // @synthesize searchRequestClientPackagingEventDate=_searchRequestClientPackagingEventDate;
@property(retain, nonatomic) YTMonotonicDate *searchUIOnFocusEventDate; // @synthesize searchUIOnFocusEventDate=_searchUIOnFocusEventDate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)isEmpty;
- (void)clearCache;
- (id)init;

@end
