//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString;
@protocol SKTSelectedContactsDisplay;

@protocol SKTSelectedContactsDisplayDelegate <NSObject>

@optional
- (_Bool)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 shouldUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didCompleteManualInput:(NSString *)arg2;
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didChangeInput:(NSString *)arg2;
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 chipFieldHeightDidChange:(double)arg2;
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didChangeToMaximumHeight:(double)arg2 fromMaximumHeight:(double)arg3;
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
@end

