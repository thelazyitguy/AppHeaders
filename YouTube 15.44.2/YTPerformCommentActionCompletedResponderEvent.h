//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class YTIActionResult;

@interface YTPerformCommentActionCompletedResponderEvent : YTResponderEvent
{
    YTIActionResult *_actionResult;
    id _entry;
}

+ (id)eventWithActionResult:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) YTIActionResult *actionResult; // @synthesize actionResult=_actionResult;
- (id)initWithActionResult:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;

@end

