//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8ArgoCore15ACFSubscription_-Protocol.h"

@protocol MSLTask;

@interface MSLTaskSubscription : NSObject <_TtP8ArgoCore15ACFSubscription_>
{
    id <MSLTask> _mslTask;
}

- (void).cxx_destruct;
@property(retain) id <MSLTask> mslTask; // @synthesize mslTask=_mslTask;
- (void)cancel;
- (id)initWithTask:(id)arg1;

@end

