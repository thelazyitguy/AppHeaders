//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ASMSession-Protocol.h>

@interface ASMMASessionImpl : NSObject <ASMSession>
{
    _Bool _finished;
    CDUnknownBlockType _dismissalCallback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(copy, nonatomic) CDUnknownBlockType dismissalCallback; // @synthesize dismissalCallback=_dismissalCallback;
- (void)finish;
- (void)dismissAnimated:(_Bool)arg1;

@end

