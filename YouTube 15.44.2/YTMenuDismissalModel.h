//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTResponder;

@interface YTMenuDismissalModel : NSObject
{
    _Bool _didLog;
    CDUnknownBlockType _dismissalBlock;
    id <YTResponder> _firstResponder;
    id _cancelTrackableObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id cancelTrackableObject; // @synthesize cancelTrackableObject=_cancelTrackableObject;
@property(nonatomic) _Bool didLog; // @synthesize didLog=_didLog;
@property(nonatomic) __weak id <YTResponder> firstResponder; // @synthesize firstResponder=_firstResponder;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;

@end
