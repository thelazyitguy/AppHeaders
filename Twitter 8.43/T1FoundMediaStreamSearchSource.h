//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1FoundMediaStreamSource-Protocol.h>

@class NSString;

@interface T1FoundMediaStreamSearchSource : NSObject <T1FoundMediaStreamSource>
{
    NSString *_keyword;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)loadWithOptions:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithKeyword:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
