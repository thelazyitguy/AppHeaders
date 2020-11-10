//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWACardType-Protocol.h>

@class NSData, NSString, OrchImageWithCaption, UIImage;

@interface GWACreditCardType : NSObject <GWACardType>
{
    int _cvcLength;
    NSData *_typeToken;
    UIImage *_icon;
    OrchImageWithCaption *_cvcImage;
    NSString *_cvcHeader;
    NSString *_cvcText;
    NSString *_title;
    NSString *_uniqueId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *cvcText; // @synthesize cvcText=_cvcText;
@property(readonly, nonatomic) NSString *cvcHeader; // @synthesize cvcHeader=_cvcHeader;
@property(readonly, nonatomic) OrchImageWithCaption *cvcImage; // @synthesize cvcImage=_cvcImage;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) int cvcLength; // @synthesize cvcLength=_cvcLength;
@property(readonly, nonatomic) NSData *typeToken; // @synthesize typeToken=_typeToken;
- (id)initWithTitle:(id)arg1 uniqueId:(id)arg2 icon:(id)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithCardUpdateForm:(id)arg1;
- (id)initWithCardType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType iconUpdateBlock;
@property(readonly) Class superclass;

@end

