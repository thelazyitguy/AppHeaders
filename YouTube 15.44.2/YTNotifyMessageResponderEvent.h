//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class NSString;

@interface YTNotifyMessageResponderEvent : YTResponderEvent
{
    NSString *_message;
    CDUnknownBlockType _precondition;
    CDUnknownBlockType _postAction;
}

+ (id)eventWithMessage:(id)arg1 precondition:(CDUnknownBlockType)arg2 postAction:(CDUnknownBlockType)arg3 firstResponder:(id)arg4;
+ (id)eventWithMessage:(id)arg1 firstResponder:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType postAction; // @synthesize postAction=_postAction;
@property(readonly, nonatomic) CDUnknownBlockType precondition; // @synthesize precondition=_precondition;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 precondition:(CDUnknownBlockType)arg2 postAction:(CDUnknownBlockType)arg3 firstResponder:(id)arg4;

@end

