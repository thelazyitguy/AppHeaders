//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSenderAvatarContact.h"

@class NSString;
@protocol JBTPromo;

@interface TopPromoSenderAvatarContact : GBTSenderAvatarContact
{
    id <JBTPromo> _promo;
    NSString *_promoMerchantLogo;
}

- (void).cxx_destruct;
- (id)imageUrl;
- (id)initWithContact:(id)arg1 profilePicture:(id)arg2 promoMerchantLogo:(id)arg3;
- (id)initWithContact:(id)arg1 profilePicture:(id)arg2 promo:(id)arg3;
- (id)initWithContact:(id)arg1 promo:(id)arg2;

@end
