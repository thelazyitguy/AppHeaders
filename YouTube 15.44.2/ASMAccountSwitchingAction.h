//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMAction.h>

@class UIView;

@interface ASMAccountSwitchingAction : ASMAction
{
    UIView *_sourceView;
    unsigned long long _sourceViewType;
    CDUnknownBlockType _newAccountCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType newAccountCallback; // @synthesize newAccountCallback=_newAccountCallback;
@property(nonatomic) unsigned long long sourceViewType; // @synthesize sourceViewType=_sourceViewType;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (id)initWithSourceView:(id)arg1 type:(unsigned long long)arg2 newAccountCallback:(CDUnknownBlockType)arg3;

@end

