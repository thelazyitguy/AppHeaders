//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _TtP11ItemDetails40ItemPageLoadingSectionControllerDelegate_;

@interface _TtC11ItemDetails32ItemPageLoadingSectionController : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: customHeight
    // Error parsing type: , name: useCustomHeight
    // Error parsing type: , name: appearDelegate
}

+ (id)classIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)sectionController:(id)arg1 willDisplayCell:(id)arg2 forRow:(long long)arg3;
- (double)sectionController:(id)arg1 heightForRow:(long long)arg2;
- (id)sectionController:(id)arg1 cellForRow:(long long)arg2;
- (long long)numberOfRowsForSectionController:(id)arg1;
- (void)sectionDidLoad:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
@property(nonatomic) __weak id <_TtP11ItemDetails40ItemPageLoadingSectionControllerDelegate_> appearDelegate; // @synthesize appearDelegate;
@property(nonatomic) _Bool useCustomHeight; // @synthesize useCustomHeight;
@property(nonatomic) double customHeight; // @synthesize customHeight;
@property(nonatomic, copy) NSString *identifier;

@end
