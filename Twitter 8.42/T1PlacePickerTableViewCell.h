//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/UIAccessibilityIdentification-Protocol.h>

@class NSString, T1PlaceView, UIImageView;

@interface T1PlacePickerTableViewCell : TFNTableViewCell <UIAccessibilityIdentification>
{
    _Bool _currentlySelected;
    NSString *_accessibilityIdentifier;
    T1PlaceView *_placeView;
    UIImageView *_selectedImageView;
}

+ (double)heightForLayoutMetrics:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic, getter=isCurrentlySelected) _Bool currentlySelected; // @synthesize currentlySelected=_currentlySelected;
@property(readonly, nonatomic) T1PlaceView *placeView; // @synthesize placeView=_placeView;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

