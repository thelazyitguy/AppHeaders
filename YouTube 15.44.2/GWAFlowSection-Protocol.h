//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GPBMessage, GWAComponentGroup, NSArray, NSDictionary, NSIndexPath, NSString, OrchFormFieldMessage, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@protocol GWAFlowSection <NSObject>
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy, nonatomic) NSArray *rows;

@optional
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, nonatomic) _Bool wantsCellDividers;
@property(readonly, copy, nonatomic) NSString *title;
- (void)checkTraitCollection;
- (void)collapse;
- (_Bool)isExpanded;
- (_Bool)needsEncryptValueAfterValidation:(_Bool)arg1;
- (void)updatePartialPageDataArray:(NSArray *)arg1 component:(GPBMessage *)arg2;
- (_Bool)hasPendingTask;
- (void)sectionHasBeenPresentedInForm;
- (void)showActiveSection;
- (void)validate;
- (void)countryChanged:(NSString *)arg1 addressFormatJSON:(NSDictionary *)arg2;
- (void)rowTapped:(unsigned long long)arg1;
- (void)handleErrorMessage:(OrchFormFieldMessage *)arg1;
- (NSIndexPath *)firstFocusableIndexPath;
- (NSIndexPath *)nextIndexPathToFocus:(NSIndexPath *)arg1;
- (NSIndexPath *)firstIndexPathToFocus;
@end
