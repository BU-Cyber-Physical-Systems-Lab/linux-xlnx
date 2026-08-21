#ifndef __CIFRA_CUSTOM_FREE_H
#define __CIFRA_CUSTOM_FREE_H

#ifdef CONFIG_CIFRA_CUSTOM_FREE
/**
 * Function pointer for custom free function.
 * This function should free a page from a custom genpool, if any matches, and return 1 on success, 0 on failure.
 */
extern int (*cifra_custom_free_ptr)(struct page *page, unsigned long order);
#endif

#endif // __CIFRA_CUSTOM_FREE_H