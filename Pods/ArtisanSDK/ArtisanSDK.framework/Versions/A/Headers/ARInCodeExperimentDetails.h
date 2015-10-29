//
//  ARInCodeExperimentDetails.h
//  ARUXFLIP
//
//  Copyright (c) 2014 Artisan Mobile. All rights reserved.
//
//

#import "ARExperimentDetails.h"

/**
 * An object containing useful information about an in-code experiment
 * These are retrieved via the `ARExperimentManager#getInCodeExperimentDetails` method.
 *
 * If the experiment is not running then some fields will be nil, including currentVariantId, experimentId, experimentName, experimentType. You can check whether the experiment is currently running with **isRunning**.
 */
@interface ARInCodeExperimentDetails : ARExperimentDetails

/**
 * The description of the experiment.
 */
@property (nonatomic, readonly) NSString *experimentDescription;

/**
 * The in-code name used to register this experiment.
 */
@property (nonatomic, readonly) NSString *inCodeName;

/**
 * The name of the default variation for the experiment. If no variation has been
 * explicitly defined as the default, it's assumed to be the first variation
 * that was added.
 */
@property (nonatomic, readonly) NSString *defaultVariant;

/**
 * The start date of this in-code experiment. This is set automatically by Artisan.
 *
 * @warning This will be nil if the experiment isn't running
 */
@property (nonatomic, readonly) NSDate *startDate;

/**
 * The end date of this in-code experiment. This is set automatically by Artisan.
 *
 * @warning This will be nil if the experiment isn't running
 */
@property (nonatomic, readonly) NSDate *endDate;

/**
 * Whether this experiment is currently running in Artisan Tools.
 * 
 * @warning This flag will be true if you've used the `ARExperimentManager#startExperiment:variantName:`
 * method but all of the web side experiment details (currentVariationId, currentVariationName, experimentId ect.)
 * will be nil since this experiment wasn't kicked off from the web.
 */
@property (nonatomic, readonly) BOOL isRunning;

@end
