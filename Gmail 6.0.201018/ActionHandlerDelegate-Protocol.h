//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTActionSource-Protocol.h"

@protocol JBTCommandSuccess, JBTSpan;

@protocol ActionHandlerDelegate <GBTActionSource>
- (_Bool)isUserActionFromContextWithNavigationType:(unsigned long long)arg1;
- (void)didNotPerformAction:(unsigned long long)arg1;
- (void)didPerformAction:(unsigned long long)arg1 isMultiselect:(_Bool)arg2;

@optional
- (void)actionWasUndone:(unsigned long long)arg1;
- (void)willPerformSelectAllActionWithCommandSuccess:(id <JBTCommandSuccess>)arg1;
- (void)willPerformAction:(unsigned long long)arg1 span:(id <JBTSpan>)arg2;
- (void)mayPerformAction:(unsigned long long)arg1;
@end
