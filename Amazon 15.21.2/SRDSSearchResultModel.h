//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber, NSString, SRDSSearchAirstreamProductModel, SRDSSearchAudienceRatingModel, SRDSSearchAvailabilityModel, SRDSSearchBestSellerModel, SRDSSearchCompareModel, SRDSSearchDecorationsModel, SRDSSearchEmiModel, SRDSSearchFreshCouponModel, SRDSSearchHiddenModel, SRDSSearchImageModel, SRDSSearchImportedModel, SRDSSearchLinkModel, SRDSSearchMerchantModel, SRDSSearchMovieModel, SRDSSearchNativeBadgeModel, SRDSSearchNewerVersionModel, SRDSSearchNonPrimeOfferModel, SRDSSearchPantryBoxFillModel, SRDSSearchPointsModel, SRDSSearchPricesModel, SRDSSearchPrimeFastTrackMessageModel, SRDSSearchRatingsModel, SRDSSearchSeeMoreDetailsModel, SRDSSearchShippingModel, SRDSSearchTopNewReleaseModel, SRDSSearchTradeInModel, SRDSSearchUnifiedPromotionsModel;
@protocol Optional, SRDSSearchActionButtonModel><Optional, SRDSSearchContributorModel><Optional, SRDSSearchEditionsPriceInfoModel><Optional, SRDSSearchImageModel><Optional, SRDSSearchInbandImageModel><Optional, SRDSSearchPromotionModel><Optional, SRDSSearchStyledTextModel><Optional, SRDSSearchVariationModel><Optional;

@interface SRDSSearchResultModel : JSONModel
{
    NSString *_type;
    NSString *_asin;
    NSString<Optional> *_parentAsin;
    NSString<Optional> *_group;
    NSString *_title;
    NSString<Optional> *_truncatedTitle;
    NSString<Optional> *_brandDeduppedTitle;
    NSArray<SRDSSearchStyledTextModel><Optional> *_productDescription;
    NSString<Optional> *_brandName;
    NSString<Optional> *_byLine;
    NSString<Optional> *_synopsis;
    NSString<Optional> *_tvSeasonAsin;
    NSString<Optional> *_unsupportedMessage;
    NSString<Optional> *_offerId;
    NSString<Optional> *_typeName;
    NSString<Optional> *_issueInfo;
    NSString<Optional> *_releaseDate;
    NSString<Optional> *_purchasedDate;
    NSString<Optional> *_viewedDate;
    NSNumber<Optional> *_closedCaption;
    NSNumber<Optional> *_heroASIN;
    NSNumber<Optional> *_oneClickBuyable;
    NSNumber<Optional> *_canAddToCart;
    NSString<Optional> *_ageRange;
    NSString<Optional> *_merchantSku;
    NSNumber<Optional> *_sims;
    NSString<Optional> *_freshSimilarItemsUrl;
    NSString<Optional> *_freshAdditionalItemsUrl;
    NSNumber<Optional> *_numVisibleOffers;
    NSArray<SRDSSearchActionButtonModel><Optional> *_actionButtons;
    NSArray<SRDSSearchStyledTextModel><Optional> *_styledByLine;
    NSArray<SRDSSearchStyledTextModel><Optional> *_styledTypeName;
    NSArray<SRDSSearchStyledTextModel><Optional> *_supplementaryText;
    NSArray<SRDSSearchStyledTextModel><Optional> *_energyEfficiencyRating;
    SRDSSearchCompareModel<Optional> *_compare;
    SRDSSearchDecorationsModel<Optional> *_decorations;
    SRDSSearchLinkModel *_link;
    SRDSSearchMovieModel<Optional> *_movie;
    SRDSSearchImageModel *_image;
    SRDSSearchPricesModel<Optional> *_prices;
    SRDSSearchNativeBadgeModel<Optional> *_dealBadge;
    SRDSSearchRatingsModel<Optional> *_ratings;
    SRDSSearchShippingModel<Optional> *_shipping;
    SRDSSearchAvailabilityModel<Optional> *_availability;
    SRDSSearchBestSellerModel<Optional> *_bestSeller;
    SRDSSearchNativeBadgeModel<Optional> *_coupon;
    SRDSSearchFreshCouponModel<Optional> *_freshCoupon;
    SRDSSearchNativeBadgeModel<Optional> *_headerBadge;
    SRDSSearchTopNewReleaseModel<Optional> *_topNewRelease;
    SRDSSearchPantryBoxFillModel<Optional> *_pantryBoxFill;
    SRDSSearchPointsModel<Optional> *_points;
    SRDSSearchTradeInModel<Optional> *_tradeIn;
    SRDSSearchAudienceRatingModel<Optional> *_audienceRating;
    SRDSSearchMerchantModel<Optional> *_merchant;
    NSArray<SRDSSearchStyledTextModel><Optional> *_merchantSoldByInfo;
    NSArray<SRDSSearchVariationModel><Optional> *_variations;
    SRDSSearchNewerVersionModel<Optional> *_newerVersion;
    SRDSSearchNonPrimeOfferModel<Optional> *_nonPrimeOffer;
    SRDSSearchHiddenModel<Optional> *_hidden;
    SRDSSearchAirstreamProductModel<Optional> *_airstream;
    SRDSSearchImportedModel<Optional> *_imported;
    SRDSSearchSeeMoreDetailsModel<Optional> *_seeMoreDetails;
    SRDSSearchNativeBadgeModel<Optional> *_primeMemberPromotionBadge;
    SRDSSearchPrimeFastTrackMessageModel<Optional> *_primeFastTrackMessage;
    NSArray<SRDSSearchInbandImageModel><Optional> *_inbandImages;
    NSArray<SRDSSearchImageModel><Optional> *_altImages;
    NSArray<SRDSSearchContributorModel><Optional> *_actors;
    NSArray<SRDSSearchContributorModel><Optional> *_authors;
    NSArray<SRDSSearchContributorModel><Optional> *_directors;
    NSArray<SRDSSearchPromotionModel><Optional> *_promotions;
    SRDSSearchUnifiedPromotionsModel<Optional> *_unifiedPromotions;
    SRDSSearchEmiModel<Optional> *_emi;
    NSArray<SRDSSearchEditionsPriceInfoModel><Optional> *_offers;
    NSString<Optional> *_instantExperienceMetadata;
    NSArray<SRDSSearchStyledTextModel><Optional> *_headerText;
    NSArray<SRDSSearchStyledTextModel><Optional> *_footerText;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSString<Optional> *instantExperienceMetadata; // @synthesize instantExperienceMetadata=_instantExperienceMetadata;
@property(retain, nonatomic) NSArray<SRDSSearchEditionsPriceInfoModel><Optional> *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) SRDSSearchEmiModel<Optional> *emi; // @synthesize emi=_emi;
@property(retain, nonatomic) SRDSSearchUnifiedPromotionsModel<Optional> *unifiedPromotions; // @synthesize unifiedPromotions=_unifiedPromotions;
@property(retain, nonatomic) NSArray<SRDSSearchPromotionModel><Optional> *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NSArray<SRDSSearchContributorModel><Optional> *directors; // @synthesize directors=_directors;
@property(retain, nonatomic) NSArray<SRDSSearchContributorModel><Optional> *authors; // @synthesize authors=_authors;
@property(retain, nonatomic) NSArray<SRDSSearchContributorModel><Optional> *actors; // @synthesize actors=_actors;
@property(retain, nonatomic) NSArray<SRDSSearchImageModel><Optional> *altImages; // @synthesize altImages=_altImages;
@property(retain, nonatomic) NSArray<SRDSSearchInbandImageModel><Optional> *inbandImages; // @synthesize inbandImages=_inbandImages;
@property(retain, nonatomic) SRDSSearchPrimeFastTrackMessageModel<Optional> *primeFastTrackMessage; // @synthesize primeFastTrackMessage=_primeFastTrackMessage;
@property(retain, nonatomic) SRDSSearchNativeBadgeModel<Optional> *primeMemberPromotionBadge; // @synthesize primeMemberPromotionBadge=_primeMemberPromotionBadge;
@property(retain, nonatomic) SRDSSearchSeeMoreDetailsModel<Optional> *seeMoreDetails; // @synthesize seeMoreDetails=_seeMoreDetails;
@property(retain, nonatomic) SRDSSearchImportedModel<Optional> *imported; // @synthesize imported=_imported;
@property(retain, nonatomic) SRDSSearchAirstreamProductModel<Optional> *airstream; // @synthesize airstream=_airstream;
@property(retain, nonatomic) SRDSSearchHiddenModel<Optional> *hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) SRDSSearchNonPrimeOfferModel<Optional> *nonPrimeOffer; // @synthesize nonPrimeOffer=_nonPrimeOffer;
@property(retain, nonatomic) SRDSSearchNewerVersionModel<Optional> *newerVersion; // @synthesize newerVersion=_newerVersion;
@property(retain, nonatomic) NSArray<SRDSSearchVariationModel><Optional> *variations; // @synthesize variations=_variations;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *merchantSoldByInfo; // @synthesize merchantSoldByInfo=_merchantSoldByInfo;
@property(retain, nonatomic) SRDSSearchMerchantModel<Optional> *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) SRDSSearchAudienceRatingModel<Optional> *audienceRating; // @synthesize audienceRating=_audienceRating;
@property(retain, nonatomic) SRDSSearchTradeInModel<Optional> *tradeIn; // @synthesize tradeIn=_tradeIn;
@property(retain, nonatomic) SRDSSearchPointsModel<Optional> *points; // @synthesize points=_points;
@property(retain, nonatomic) SRDSSearchPantryBoxFillModel<Optional> *pantryBoxFill; // @synthesize pantryBoxFill=_pantryBoxFill;
@property(retain, nonatomic) SRDSSearchTopNewReleaseModel<Optional> *topNewRelease; // @synthesize topNewRelease=_topNewRelease;
@property(retain, nonatomic) SRDSSearchNativeBadgeModel<Optional> *headerBadge; // @synthesize headerBadge=_headerBadge;
@property(retain, nonatomic) SRDSSearchFreshCouponModel<Optional> *freshCoupon; // @synthesize freshCoupon=_freshCoupon;
@property(retain, nonatomic) SRDSSearchNativeBadgeModel<Optional> *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) SRDSSearchBestSellerModel<Optional> *bestSeller; // @synthesize bestSeller=_bestSeller;
@property(retain, nonatomic) SRDSSearchAvailabilityModel<Optional> *availability; // @synthesize availability=_availability;
@property(retain, nonatomic) SRDSSearchShippingModel<Optional> *shipping; // @synthesize shipping=_shipping;
@property(retain, nonatomic) SRDSSearchRatingsModel<Optional> *ratings; // @synthesize ratings=_ratings;
@property(retain, nonatomic) SRDSSearchNativeBadgeModel<Optional> *dealBadge; // @synthesize dealBadge=_dealBadge;
@property(retain, nonatomic) SRDSSearchPricesModel<Optional> *prices; // @synthesize prices=_prices;
@property(retain, nonatomic) SRDSSearchImageModel *image; // @synthesize image=_image;
@property(retain, nonatomic) SRDSSearchMovieModel<Optional> *movie; // @synthesize movie=_movie;
@property(retain, nonatomic) SRDSSearchLinkModel *link; // @synthesize link=_link;
@property(retain, nonatomic) SRDSSearchDecorationsModel<Optional> *decorations; // @synthesize decorations=_decorations;
@property(retain, nonatomic) SRDSSearchCompareModel<Optional> *compare; // @synthesize compare=_compare;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *energyEfficiencyRating; // @synthesize energyEfficiencyRating=_energyEfficiencyRating;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *supplementaryText; // @synthesize supplementaryText=_supplementaryText;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *styledTypeName; // @synthesize styledTypeName=_styledTypeName;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *styledByLine; // @synthesize styledByLine=_styledByLine;
@property(retain, nonatomic) NSArray<SRDSSearchActionButtonModel><Optional> *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) NSNumber<Optional> *numVisibleOffers; // @synthesize numVisibleOffers=_numVisibleOffers;
@property(retain, nonatomic) NSString<Optional> *freshAdditionalItemsUrl; // @synthesize freshAdditionalItemsUrl=_freshAdditionalItemsUrl;
@property(retain, nonatomic) NSString<Optional> *freshSimilarItemsUrl; // @synthesize freshSimilarItemsUrl=_freshSimilarItemsUrl;
@property(retain, nonatomic) NSNumber<Optional> *sims; // @synthesize sims=_sims;
@property(retain, nonatomic) NSString<Optional> *merchantSku; // @synthesize merchantSku=_merchantSku;
@property(retain, nonatomic) NSString<Optional> *ageRange; // @synthesize ageRange=_ageRange;
@property(retain, nonatomic) NSNumber<Optional> *canAddToCart; // @synthesize canAddToCart=_canAddToCart;
@property(retain, nonatomic) NSNumber<Optional> *oneClickBuyable; // @synthesize oneClickBuyable=_oneClickBuyable;
@property(retain, nonatomic) NSNumber<Optional> *heroASIN; // @synthesize heroASIN=_heroASIN;
@property(retain, nonatomic) NSNumber<Optional> *closedCaption; // @synthesize closedCaption=_closedCaption;
@property(retain, nonatomic) NSString<Optional> *viewedDate; // @synthesize viewedDate=_viewedDate;
@property(retain, nonatomic) NSString<Optional> *purchasedDate; // @synthesize purchasedDate=_purchasedDate;
@property(retain, nonatomic) NSString<Optional> *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSString<Optional> *issueInfo; // @synthesize issueInfo=_issueInfo;
@property(retain, nonatomic) NSString<Optional> *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString<Optional> *offerId; // @synthesize offerId=_offerId;
@property(retain, nonatomic) NSString<Optional> *unsupportedMessage; // @synthesize unsupportedMessage=_unsupportedMessage;
@property(retain, nonatomic) NSString<Optional> *tvSeasonAsin; // @synthesize tvSeasonAsin=_tvSeasonAsin;
@property(retain, nonatomic) NSString<Optional> *synopsis; // @synthesize synopsis=_synopsis;
@property(retain, nonatomic) NSString<Optional> *byLine; // @synthesize byLine=_byLine;
@property(retain, nonatomic) NSString<Optional> *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSArray<SRDSSearchStyledTextModel><Optional> *productDescription; // @synthesize productDescription=_productDescription;
@property(retain, nonatomic) NSString<Optional> *brandDeduppedTitle; // @synthesize brandDeduppedTitle=_brandDeduppedTitle;
@property(retain, nonatomic) NSString<Optional> *truncatedTitle; // @synthesize truncatedTitle=_truncatedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString<Optional> *parentAsin; // @synthesize parentAsin=_parentAsin;
@property(retain, nonatomic) NSString *asin; // @synthesize asin=_asin;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
