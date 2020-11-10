//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GWAWidgetViewModelDelegate;

@interface GWAWidgetViewModel : NSObject
{
    id <GWAWidgetViewModelDelegate> _delegate;
    NSMutableArray *_sections;
    NSMutableArray *_stickyFooterSections;
    NSMutableArray *_triggers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSMutableArray *stickyFooterSections; // @synthesize stickyFooterSections=_stickyFooterSections;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <GWAWidgetViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearTriggers;
- (void)addTrigger:(id)arg1;
- (void)removedAnimatedSections;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)updateModelWithSections:(id)arg1 stickyFooterSections:(id)arg2 callDelegateForChanges:(_Bool)arg3;
- (void)updateModelWithSections:(id)arg1 stickyFooterSections:(id)arg2;
- (id)init;

@end

