//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface _TtC11ItemDetails32ItemPageActionsSectionController : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: delegate
    // Error parsing type: , name: scrollEventView
    // Error parsing type: , name: actionsCell
    // Error parsing type: , name: cellHeights
    // Error parsing type: , name: alertDelegate
    // Error parsing type: , name: mainStageBlock
    // Error parsing type: , name: secondaryStageBlock
    // Error parsing type: , name: thirdStageBlock
    // Error parsing type: , name: actionStateIntegrator
    // Error parsing type: , name: showAccessory
}

+ (id)classIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)itemPageActionsCellBeingReused:(id)arg1;
- (double)sectionController:(id)arg1 heightForRow:(long long)arg2;
- (id)sectionController:(id)arg1 cellForRow:(long long)arg2;
- (long long)numberOfRowsForSectionController:(id)arg1;
- (void)sectionController:(id)arg1 willDisplayCell:(id)arg2 forRow:(long long)arg3;
- (void)sectionDidLoad:(id)arg1;
@property(nonatomic) __weak UIView *scrollEventView; // @synthesize scrollEventView;
@property(nonatomic, copy) NSString *identifier;

@end
