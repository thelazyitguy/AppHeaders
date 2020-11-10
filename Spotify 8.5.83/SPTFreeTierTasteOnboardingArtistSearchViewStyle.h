//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECollectionViewStyle, NSString, SPTFreeTierTasteOnboardingArtistPickerOfflineViewStyle, SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle, UIColor, UIFont, UIImage;
@protocol GLUEStyle;

@interface SPTFreeTierTasteOnboardingArtistSearchViewStyle : NSObject <GLUEStyle>
{
    GLUECollectionViewStyle *_collectionViewStyle;
    SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle<GLUEStyle> *_collectionViewLayoutStyle;
    unsigned long long _searchBarStyle;
    UIFont *_searchBarFont;
    UIColor *_searchBarTextColor;
    UIImage *_searchBarFieldBackground;
    UIImage *_searchBarSearchIcon;
    UIImage *_searchBarClearIcon;
    UIImage *_searchBarClearIconHighlighted;
    long long _searchBarKeyboardAppearance;
    SPTFreeTierTasteOnboardingArtistPickerOfflineViewStyle *_offlineViewStyle;
    struct UIOffset _searchBarTextOffset;
    struct UIOffset _searchBarClearIconOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistPickerOfflineViewStyle *offlineViewStyle; // @synthesize offlineViewStyle=_offlineViewStyle;
@property(nonatomic) long long searchBarKeyboardAppearance; // @synthesize searchBarKeyboardAppearance=_searchBarKeyboardAppearance;
@property(nonatomic) struct UIOffset searchBarClearIconOffset; // @synthesize searchBarClearIconOffset=_searchBarClearIconOffset;
@property(nonatomic) struct UIOffset searchBarTextOffset; // @synthesize searchBarTextOffset=_searchBarTextOffset;
@property(retain, nonatomic) UIImage *searchBarClearIconHighlighted; // @synthesize searchBarClearIconHighlighted=_searchBarClearIconHighlighted;
@property(retain, nonatomic) UIImage *searchBarClearIcon; // @synthesize searchBarClearIcon=_searchBarClearIcon;
@property(retain, nonatomic) UIImage *searchBarSearchIcon; // @synthesize searchBarSearchIcon=_searchBarSearchIcon;
@property(retain, nonatomic) UIImage *searchBarFieldBackground; // @synthesize searchBarFieldBackground=_searchBarFieldBackground;
@property(retain, nonatomic) UIColor *searchBarTextColor; // @synthesize searchBarTextColor=_searchBarTextColor;
@property(retain, nonatomic) UIFont *searchBarFont; // @synthesize searchBarFont=_searchBarFont;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(copy, nonatomic) SPTFreeTierTasteOnboardingArtistSearchCollectionViewLayoutStyle<GLUEStyle> *collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionViewStyle; // @synthesize collectionViewStyle=_collectionViewStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

