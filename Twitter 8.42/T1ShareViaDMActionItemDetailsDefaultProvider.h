//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ShareViaDMActionItemDetailsProvider-Protocol.h>

@class NSString;

@interface T1ShareViaDMActionItemDetailsDefaultProvider : NSObject <T1ShareViaDMActionItemDetailsProvider>
{
    NSString *_shareText;
    NSString *_attachmentLink;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *attachmentLink; // @synthesize attachmentLink=_attachmentLink;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
- (id)initWithShareText:(id)arg1 attachmentLink:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithShareText:(id)arg1 attachmentLink:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

